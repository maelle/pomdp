// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// reward_val_from_df_cpp
double reward_val_from_df_cpp(const List& model, int action, int start_state, int end_state, int observation);
RcppExport SEXP _pomdp_reward_val_from_df_cpp(SEXP modelSEXP, SEXP actionSEXP, SEXP start_stateSEXP, SEXP end_stateSEXP, SEXP observationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type action(actionSEXP);
    Rcpp::traits::input_parameter< int >::type start_state(start_stateSEXP);
    Rcpp::traits::input_parameter< int >::type end_state(end_stateSEXP);
    Rcpp::traits::input_parameter< int >::type observation(observationSEXP);
    rcpp_result_gen = Rcpp::wrap(reward_val_from_df_cpp(model, action, start_state, end_state, observation));
    return rcpp_result_gen;
END_RCPP
}
// reward_alpha_cpp
DataFrame reward_alpha_cpp(const NumericMatrix& alpha, const NumericMatrix& belief);
RcppExport SEXP _pomdp_reward_alpha_cpp(SEXP alphaSEXP, SEXP beliefSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type belief(beliefSEXP);
    rcpp_result_gen = Rcpp::wrap(reward_alpha_cpp(alpha, belief));
    return rcpp_result_gen;
END_RCPP
}
// reward_cpp
DataFrame reward_cpp(const List& model, const NumericMatrix& belief);
RcppExport SEXP _pomdp_reward_cpp(SEXP modelSEXP, SEXP beliefSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type belief(beliefSEXP);
    rcpp_result_gen = Rcpp::wrap(reward_cpp(model, belief));
    return rcpp_result_gen;
END_RCPP
}
// update_belief_cpp
NumericVector update_belief_cpp(const List& model, const NumericVector& belief, int action, int observation, int digits);
RcppExport SEXP _pomdp_update_belief_cpp(SEXP modelSEXP, SEXP beliefSEXP, SEXP actionSEXP, SEXP observationSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type belief(beliefSEXP);
    Rcpp::traits::input_parameter< int >::type action(actionSEXP);
    Rcpp::traits::input_parameter< int >::type observation(observationSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(update_belief_cpp(model, belief, action, observation, digits));
    return rcpp_result_gen;
END_RCPP
}
// round_stochastic_cpp
NumericVector round_stochastic_cpp(const NumericVector& x, int digits);
RcppExport SEXP _pomdp_round_stochastic_cpp(SEXP xSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(round_stochastic_cpp(x, digits));
    return rcpp_result_gen;
END_RCPP
}
// veccrossprod
NumericVector veccrossprod(const NumericMatrix& A, const NumericVector& b);
RcppExport SEXP _pomdp_veccrossprod(SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(veccrossprod(A, b));
    return rcpp_result_gen;
END_RCPP
}
// vecprod
NumericVector vecprod(const NumericMatrix& A, const NumericVector& b);
RcppExport SEXP _pomdp_vecprod(SEXP ASEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(vecprod(A, b));
    return rcpp_result_gen;
END_RCPP
}
// sample_simplex_cpp
NumericMatrix sample_simplex_cpp(int n, CharacterVector states, NumericVector projection);
RcppExport SEXP _pomdp_sample_simplex_cpp(SEXP nSEXP, SEXP statesSEXP, SEXP projectionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type states(statesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type projection(projectionSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_simplex_cpp(n, states, projection));
    return rcpp_result_gen;
END_RCPP
}
// simulate_MDP_cpp
List simulate_MDP_cpp(const List& model, int n, const NumericVector& start, int horizon, double disc, bool return_states, double epsilon, bool verbose);
RcppExport SEXP _pomdp_simulate_MDP_cpp(SEXP modelSEXP, SEXP nSEXP, SEXP startSEXP, SEXP horizonSEXP, SEXP discSEXP, SEXP return_statesSEXP, SEXP epsilonSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type horizon(horizonSEXP);
    Rcpp::traits::input_parameter< double >::type disc(discSEXP);
    Rcpp::traits::input_parameter< bool >::type return_states(return_statesSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_MDP_cpp(model, n, start, horizon, disc, return_states, epsilon, verbose));
    return rcpp_result_gen;
END_RCPP
}
// simulate_POMDP_cpp
List simulate_POMDP_cpp(const List& model, int n, const NumericVector& belief, int horizon, double disc, bool return_beliefs, double epsilon, int digits, bool verbose);
RcppExport SEXP _pomdp_simulate_POMDP_cpp(SEXP modelSEXP, SEXP nSEXP, SEXP beliefSEXP, SEXP horizonSEXP, SEXP discSEXP, SEXP return_beliefsSEXP, SEXP epsilonSEXP, SEXP digitsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type belief(beliefSEXP);
    Rcpp::traits::input_parameter< int >::type horizon(horizonSEXP);
    Rcpp::traits::input_parameter< double >::type disc(discSEXP);
    Rcpp::traits::input_parameter< bool >::type return_beliefs(return_beliefsSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_POMDP_cpp(model, n, belief, horizon, disc, return_beliefs, epsilon, digits, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pomdp_reward_val_from_df_cpp", (DL_FUNC) &_pomdp_reward_val_from_df_cpp, 5},
    {"_pomdp_reward_alpha_cpp", (DL_FUNC) &_pomdp_reward_alpha_cpp, 2},
    {"_pomdp_reward_cpp", (DL_FUNC) &_pomdp_reward_cpp, 2},
    {"_pomdp_update_belief_cpp", (DL_FUNC) &_pomdp_update_belief_cpp, 5},
    {"_pomdp_round_stochastic_cpp", (DL_FUNC) &_pomdp_round_stochastic_cpp, 2},
    {"_pomdp_veccrossprod", (DL_FUNC) &_pomdp_veccrossprod, 2},
    {"_pomdp_vecprod", (DL_FUNC) &_pomdp_vecprod, 2},
    {"_pomdp_sample_simplex_cpp", (DL_FUNC) &_pomdp_sample_simplex_cpp, 3},
    {"_pomdp_simulate_MDP_cpp", (DL_FUNC) &_pomdp_simulate_MDP_cpp, 8},
    {"_pomdp_simulate_POMDP_cpp", (DL_FUNC) &_pomdp_simulate_POMDP_cpp, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_pomdp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
