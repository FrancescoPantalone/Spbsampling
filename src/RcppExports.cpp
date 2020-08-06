// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// hpwd
arma::mat hpwd(arma::mat dis, int n, double beta, int nrepl);
RcppExport SEXP _Spbsampling_hpwd(SEXP disSEXP, SEXP nSEXP, SEXP betaSEXP, SEXP nreplSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dis(disSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type nrepl(nreplSEXP);
    rcpp_result_gen = Rcpp::wrap(hpwd(dis, n, beta, nrepl));
    return rcpp_result_gen;
END_RCPP
}
// pwd
arma::mat pwd(arma::mat dis, int n, double beta, int nrepl, int niter);
RcppExport SEXP _Spbsampling_pwd(SEXP disSEXP, SEXP nSEXP, SEXP betaSEXP, SEXP nreplSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dis(disSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type nrepl(nreplSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(pwd(dis, n, beta, nrepl, niter));
    return rcpp_result_gen;
END_RCPP
}
// sbi
double sbi(arma::mat dis, arma::vec pi, arma::uvec s);
RcppExport SEXP _Spbsampling_sbi(SEXP disSEXP, SEXP piSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dis(disSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(sbi(dis, pi, s));
    return rcpp_result_gen;
END_RCPP
}
// stprod
Rcpp::List stprod(arma::mat mat, arma::vec con, double differ, int niter);
RcppExport SEXP _Spbsampling_stprod(SEXP matSEXP, SEXP conSEXP, SEXP differSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mat(matSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type con(conSEXP);
    Rcpp::traits::input_parameter< double >::type differ(differSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(stprod(mat, con, differ, niter));
    return rcpp_result_gen;
END_RCPP
}
// stsum
Rcpp::List stsum(arma::mat mat, arma::vec con, double differ, int niter);
RcppExport SEXP _Spbsampling_stsum(SEXP matSEXP, SEXP conSEXP, SEXP differSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mat(matSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type con(conSEXP);
    Rcpp::traits::input_parameter< double >::type differ(differSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(stsum(mat, con, differ, niter));
    return rcpp_result_gen;
END_RCPP
}
// swd
arma::mat swd(arma::mat dis, int n, double beta, int nrepl, int niter);
RcppExport SEXP _Spbsampling_swd(SEXP disSEXP, SEXP nSEXP, SEXP betaSEXP, SEXP nreplSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dis(disSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type nrepl(nreplSEXP);
    Rcpp::traits::input_parameter< int >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(swd(dis, n, beta, nrepl, niter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Spbsampling_hpwd", (DL_FUNC) &_Spbsampling_hpwd, 4},
    {"_Spbsampling_pwd", (DL_FUNC) &_Spbsampling_pwd, 5},
    {"_Spbsampling_sbi", (DL_FUNC) &_Spbsampling_sbi, 3},
    {"_Spbsampling_stprod", (DL_FUNC) &_Spbsampling_stprod, 4},
    {"_Spbsampling_stsum", (DL_FUNC) &_Spbsampling_stsum, 4},
    {"_Spbsampling_swd", (DL_FUNC) &_Spbsampling_swd, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_Spbsampling(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
