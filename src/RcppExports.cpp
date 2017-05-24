// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// dwt_cpp
arma::field<arma::vec> dwt_cpp(arma::vec x, std::string filter_name, unsigned int nlevels, std::string boundary, bool brickwall);
RcppExport SEXP wv_dwt_cpp(SEXP xSEXP, SEXP filter_nameSEXP, SEXP nlevelsSEXP, SEXP boundarySEXP, SEXP brickwallSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type filter_name(filter_nameSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nlevels(nlevelsSEXP);
    Rcpp::traits::input_parameter< std::string >::type boundary(boundarySEXP);
    Rcpp::traits::input_parameter< bool >::type brickwall(brickwallSEXP);
    rcpp_result_gen = Rcpp::wrap(dwt_cpp(x, filter_name, nlevels, boundary, brickwall));
    return rcpp_result_gen;
END_RCPP
}
// modwt_cpp
arma::field<arma::vec> modwt_cpp(arma::vec x, std::string filter_name, unsigned int nlevels, std::string boundary, bool brickwall);
RcppExport SEXP wv_modwt_cpp(SEXP xSEXP, SEXP filter_nameSEXP, SEXP nlevelsSEXP, SEXP boundarySEXP, SEXP brickwallSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type filter_name(filter_nameSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nlevels(nlevelsSEXP);
    Rcpp::traits::input_parameter< std::string >::type boundary(boundarySEXP);
    Rcpp::traits::input_parameter< bool >::type brickwall(brickwallSEXP);
    rcpp_result_gen = Rcpp::wrap(modwt_cpp(x, filter_name, nlevels, boundary, brickwall));
    return rcpp_result_gen;
END_RCPP
}
