// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mcd_estimation
Rcpp::List mcd_estimation(arma::vec m, arma::vec Y, arma::mat X, arma::mat Z, arma::mat W, arma::vec start, bool trace, bool profile, bool errorMsg);
RcppExport SEXP jmcm_mcd_estimation(SEXP mSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP startSEXP, SEXP traceSEXP, SEXP profileSEXP, SEXP errorMsgSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start(startSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< bool >::type profile(profileSEXP);
    Rcpp::traits::input_parameter< bool >::type errorMsg(errorMsgSEXP);
    __result = Rcpp::wrap(mcd_estimation(m, Y, X, Z, W, start, trace, profile, errorMsg));
    return __result;
END_RCPP
}
// acd_estimation
Rcpp::List acd_estimation(arma::vec m, arma::vec Y, arma::mat X, arma::mat Z, arma::mat W, arma::vec start, bool trace, bool profile, bool errorMsg);
RcppExport SEXP jmcm_acd_estimation(SEXP mSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP startSEXP, SEXP traceSEXP, SEXP profileSEXP, SEXP errorMsgSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start(startSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< bool >::type profile(profileSEXP);
    Rcpp::traits::input_parameter< bool >::type errorMsg(errorMsgSEXP);
    __result = Rcpp::wrap(acd_estimation(m, Y, X, Z, W, start, trace, profile, errorMsg));
    return __result;
END_RCPP
}
// hpc_estimation
Rcpp::List hpc_estimation(arma::vec m, arma::vec Y, arma::mat X, arma::mat Z, arma::mat W, arma::vec start, bool trace, bool profile, bool errorMsg);
RcppExport SEXP jmcm_hpc_estimation(SEXP mSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP startSEXP, SEXP traceSEXP, SEXP profileSEXP, SEXP errorMsgSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start(startSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< bool >::type profile(profileSEXP);
    Rcpp::traits::input_parameter< bool >::type errorMsg(errorMsgSEXP);
    __result = Rcpp::wrap(hpc_estimation(m, Y, X, Z, W, start, trace, profile, errorMsg));
    return __result;
END_RCPP
}
