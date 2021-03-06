#ifndef LIB_FEAT
#define LIB_FEAT
#include <iostream>
// we only include RcppArmadillo.h which pulls Rcpp.h in for us
#include "RcppArmadillo.h"

// via the depends attribute we tell Rcpp to create hooks for
// RcppArmadillo so that the build process will know what to do
//
// [[Rcpp::depends(RcppArmadillo)]]
#include "prox_utils.hpp"
using namespace arma;

struct residual {
  vec *resid;
  vec *resid_old;
  vec *y_;
  double resdiffnorm;
  std::string loss_type;

  residual(vec *y, std::string losstype) {
    resid = new vec(y->n_rows);
    *resid = -1 * *y;
    y_ = new vec(y->n_rows);
    *y_ = *y;
    resid_old = new vec(y->n_rows);
    resid_old->fill(0);
    resdiffnorm = 1000;
    loss_type = losstype;
  };
};

struct feature {
  /// Pointer to data matrix
  vec *x;
  mat *basis;
  /// Pointer to fitted matrix
  arma::vec *fitted;

  vec *buffer;

  vec *count;

  /// Pointer to Q matrix
  mat Q;

  /// Pointer to R matrix
  mat R;

  /// Pointer to matrix of orderings for X.
  uvec ord;

  std::string prox_type;

  /// Destructor
  ~feature() {
    // if(x != nullptr)
    // delete(x);
    // if(basis != nullptr)
    // delete(basis);
    // if(fitted != nullptr)
    // delete(fitted);
    // if(buffer != nullptr)
    // delete(buffer);
    // if(count != nullptr)
    // delete(count);
  }

  /// TODO:Fix basis expansion
  feature(std::string type, vec *covariates) {
    prox_type = type;
    if (type == "fl") {
      x = covariates;
      fitted = new vec(x->n_rows);
      fitted->fill(0);
      buffer = new vec(x->n_rows);
      buffer->fill(0);
      ord = sort_index(*x);
      prox_type = "fl";
    } else if (type == "proj") {
      basis = new mat(covariates->n_rows, 5);
      basis->fill(1);
      basis->col(1) = *covariates;
      for (int i = 2; i < 5; i++) {
        basis->col(i) = pow(*covariates, i);
      }
      x = new vec(basis->n_rows);
      *x = covariates->col(0);
      fitted = new vec(basis->n_rows);
      fitted->fill(0);
      buffer = new vec(basis->n_rows);
      buffer->fill(0);
      qr_econ(Q, R, *basis);
      prox_type = "proj";
      ord = sort_index(*x);
    } else if (type == "cat") {
      x = new vec(covariates->n_rows);
      *x = *covariates;
      fitted = new vec(covariates->n_rows);
      fitted->fill(0);
      count = new vec(5000);
      for (int i = 0; i < x->n_rows; i++) {
        count->at(x->at(i)) += 1;
      }
      buffer = new vec(count->n_rows);
      buffer->fill(0);
    } else {
      throw "Bad prox type: " + type;
    };
  };
  // TODO: FIGURE OUT BETTER WAY TO APPLY LINK FUNCTIONS
  feature(std::string type, residual *y) {
    prox_type = type;
    std::string loss = y->loss_type;
    if (type == "intercept") {
      fitted = new vec(y->y_->n_rows);
      double fitted_val = 0;
      if (loss == "log") {
        fitted_val = log(mean(*y->y_) / mean(1 - *y->y_));
      } else {
        fitted_val = mean(*y->y_);
      }
      fitted->fill(fitted_val);
    } else {
      throw "Bad prox type: " + type;
    };
  }
};


void sort_by(vec *orig, vec *buffer, uvec ord);

void unsort_by(vec *orig, vec *buffer, uvec ord);

#endif /* FEAT_H */