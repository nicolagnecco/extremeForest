// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// predict_gpd_params_cpp
arma::mat predict_gpd_params_cpp(arma::vec& init_pars, const arma::vec& data, const arma::mat& weights_mat, double lambda, double xi_prior, double intermediate_quantile);
RcppExport SEXP _erf_predict_gpd_params_cpp(SEXP init_parsSEXP, SEXP dataSEXP, SEXP weights_matSEXP, SEXP lambdaSEXP, SEXP xi_priorSEXP, SEXP intermediate_quantileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type init_pars(init_parsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type weights_mat(weights_matSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type xi_prior(xi_priorSEXP);
    Rcpp::traits::input_parameter< double >::type intermediate_quantile(intermediate_quantileSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_gpd_params_cpp(init_pars, data, weights_mat, lambda, xi_prior, intermediate_quantile));
    return rcpp_result_gen;
END_RCPP
}
// weighted_llh
double weighted_llh(const arma::vec& par, const arma::vec& data, const arma::vec& weights, double lambda, double xi_prior, double intermediate_quantile);
RcppExport SEXP _erf_weighted_llh(SEXP parSEXP, SEXP dataSEXP, SEXP weightsSEXP, SEXP lambdaSEXP, SEXP xi_priorSEXP, SEXP intermediate_quantileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type xi_prior(xi_priorSEXP);
    Rcpp::traits::input_parameter< double >::type intermediate_quantile(intermediate_quantileSEXP);
    rcpp_result_gen = Rcpp::wrap(weighted_llh(par, data, weights, lambda, xi_prior, intermediate_quantile));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_erf_predict_gpd_params_cpp", (DL_FUNC) &_erf_predict_gpd_params_cpp, 6},
    {"_erf_weighted_llh", (DL_FUNC) &_erf_weighted_llh, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_erf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
