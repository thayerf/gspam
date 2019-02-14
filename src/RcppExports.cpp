// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// gspam_c
Rcpp::List gspam_c(arma::mat data, arma::vec y, std::vector<std::string> prox_type, std::string loss_type, double lambda1, double lambda2);
RcppExport SEXP _gspam_gspam_c(SEXP dataSEXP, SEXP ySEXP, SEXP prox_typeSEXP, SEXP loss_typeSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type prox_type(prox_typeSEXP);
    Rcpp::traits::input_parameter< std::string >::type loss_type(loss_typeSEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    rcpp_result_gen = Rcpp::wrap(gspam_c(data, y, prox_type, loss_type, lambda1, lambda2));
    return rcpp_result_gen;
END_RCPP
}
// gspam_c_vec
Rcpp::List gspam_c_vec(arma::mat data, arma::vec y, std::vector<std::string> prox_type, std::string loss_type, arma::vec lambda1, arma::vec lambda2);
RcppExport SEXP _gspam_gspam_c_vec(SEXP dataSEXP, SEXP ySEXP, SEXP prox_typeSEXP, SEXP loss_typeSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type prox_type(prox_typeSEXP);
    Rcpp::traits::input_parameter< std::string >::type loss_type(loss_typeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda2(lambda2SEXP);
    rcpp_result_gen = Rcpp::wrap(gspam_c_vec(data, y, prox_type, loss_type, lambda1, lambda2));
    return rcpp_result_gen;
END_RCPP
}
// interpolate
double interpolate(arma::mat x, arma::mat fitted, arma::vec sort_point);
RcppExport SEXP _gspam_interpolate(SEXP xSEXP, SEXP fittedSEXP, SEXP sort_pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type fitted(fittedSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sort_point(sort_pointSEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate(x, fitted, sort_point));
    return rcpp_result_gen;
END_RCPP
}
// gspam_full
Rcpp::List gspam_full(arma::mat data, arma::vec y, std::vector<std::string> prox_type, std::string loss_type, double alpha);
RcppExport SEXP _gspam_gspam_full(SEXP dataSEXP, SEXP ySEXP, SEXP prox_typeSEXP, SEXP loss_typeSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type prox_type(prox_typeSEXP);
    Rcpp::traits::input_parameter< std::string >::type loss_type(loss_typeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(gspam_full(data, y, prox_type, loss_type, alpha));
    return rcpp_result_gen;
END_RCPP
}
// get_lambdas
Rcpp::List get_lambdas(arma::mat data, arma::vec y, std::vector<std::string> prox_type, std::string loss_type, double alpha);
RcppExport SEXP _gspam_get_lambdas(SEXP dataSEXP, SEXP ySEXP, SEXP prox_typeSEXP, SEXP loss_typeSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type prox_type(prox_typeSEXP);
    Rcpp::traits::input_parameter< std::string >::type loss_type(loss_typeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_lambdas(data, y, prox_type, loss_type, alpha));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_vec
double interpolate_vec(arma::vec x, arma::vec fitted, double sort_point);
RcppExport SEXP _gspam_interpolate_vec(SEXP xSEXP, SEXP fittedSEXP, SEXP sort_pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type fitted(fittedSEXP);
    Rcpp::traits::input_parameter< double >::type sort_point(sort_pointSEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_vec(x, fitted, sort_point));
    return rcpp_result_gen;
END_RCPP
}
// loss
double loss(arma::vec y, arma::vec theta, std::string type);
RcppExport SEXP _gspam_loss(SEXP ySEXP, SEXP thetaSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(loss(y, theta, type));
    return rcpp_result_gen;
END_RCPP
}
// grad
arma::vec grad(arma::vec y, arma::vec theta, std::string type);
RcppExport SEXP _gspam_grad(SEXP ySEXP, SEXP thetaSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(grad(y, theta, type));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gspam_gspam_c", (DL_FUNC) &_gspam_gspam_c, 6},
    {"_gspam_gspam_c_vec", (DL_FUNC) &_gspam_gspam_c_vec, 6},
    {"_gspam_interpolate", (DL_FUNC) &_gspam_interpolate, 3},
    {"_gspam_gspam_full", (DL_FUNC) &_gspam_gspam_full, 5},
    {"_gspam_get_lambdas", (DL_FUNC) &_gspam_get_lambdas, 5},
    {"_gspam_interpolate_vec", (DL_FUNC) &_gspam_interpolate_vec, 3},
    {"_gspam_loss", (DL_FUNC) &_gspam_loss, 3},
    {"_gspam_grad", (DL_FUNC) &_gspam_grad, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_gspam(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
