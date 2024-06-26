// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ratioOfQsprays.h"

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ROQaddition
Rcpp::List ROQaddition(const Rcpp::List& Numerator1, const Rcpp::List& Denominator1, const Rcpp::List& Numerator2, const Rcpp::List& Denominator2);
RcppExport SEXP _ratioOfQsprays_ROQaddition(SEXP Numerator1SEXP, SEXP Denominator1SEXP, SEXP Numerator2SEXP, SEXP Denominator2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator1(Numerator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator1(Denominator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator2(Numerator2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator2(Denominator2SEXP);
    rcpp_result_gen = Rcpp::wrap(ROQaddition(Numerator1, Denominator1, Numerator2, Denominator2));
    return rcpp_result_gen;
END_RCPP
}
// ROQsubtraction
Rcpp::List ROQsubtraction(const Rcpp::List& Numerator1, const Rcpp::List& Denominator1, const Rcpp::List& Numerator2, const Rcpp::List& Denominator2);
RcppExport SEXP _ratioOfQsprays_ROQsubtraction(SEXP Numerator1SEXP, SEXP Denominator1SEXP, SEXP Numerator2SEXP, SEXP Denominator2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator1(Numerator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator1(Denominator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator2(Numerator2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator2(Denominator2SEXP);
    rcpp_result_gen = Rcpp::wrap(ROQsubtraction(Numerator1, Denominator1, Numerator2, Denominator2));
    return rcpp_result_gen;
END_RCPP
}
// ROQmultiplication
Rcpp::List ROQmultiplication(const Rcpp::List& Numerator1, const Rcpp::List& Denominator1, const Rcpp::List& Numerator2, const Rcpp::List& Denominator2);
RcppExport SEXP _ratioOfQsprays_ROQmultiplication(SEXP Numerator1SEXP, SEXP Denominator1SEXP, SEXP Numerator2SEXP, SEXP Denominator2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator1(Numerator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator1(Denominator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator2(Numerator2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator2(Denominator2SEXP);
    rcpp_result_gen = Rcpp::wrap(ROQmultiplication(Numerator1, Denominator1, Numerator2, Denominator2));
    return rcpp_result_gen;
END_RCPP
}
// ROQdivision
Rcpp::List ROQdivision(const Rcpp::List& Numerator1, const Rcpp::List& Denominator1, const Rcpp::List& Numerator2, const Rcpp::List& Denominator2);
RcppExport SEXP _ratioOfQsprays_ROQdivision(SEXP Numerator1SEXP, SEXP Denominator1SEXP, SEXP Numerator2SEXP, SEXP Denominator2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator1(Numerator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator1(Denominator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator2(Numerator2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator2(Denominator2SEXP);
    rcpp_result_gen = Rcpp::wrap(ROQdivision(Numerator1, Denominator1, Numerator2, Denominator2));
    return rcpp_result_gen;
END_RCPP
}
// ROQpower
Rcpp::List ROQpower(const Rcpp::List& Numerator, const Rcpp::List& Denominator, int n);
RcppExport SEXP _ratioOfQsprays_ROQpower(SEXP NumeratorSEXP, SEXP DenominatorSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator(NumeratorSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator(DenominatorSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(ROQpower(Numerator, Denominator, n));
    return rcpp_result_gen;
END_RCPP
}
// ROQequality
bool ROQequality(const Rcpp::List& Numerator1, const Rcpp::List& Denominator1, const Rcpp::List& Numerator2, const Rcpp::List& Denominator2);
RcppExport SEXP _ratioOfQsprays_ROQequality(SEXP Numerator1SEXP, SEXP Denominator1SEXP, SEXP Numerator2SEXP, SEXP Denominator2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator1(Numerator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator1(Denominator1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Numerator2(Numerator2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Denominator2(Denominator2SEXP);
    rcpp_result_gen = Rcpp::wrap(ROQequality(Numerator1, Denominator1, Numerator2, Denominator2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ratioOfQsprays_ROQaddition", (DL_FUNC) &_ratioOfQsprays_ROQaddition, 4},
    {"_ratioOfQsprays_ROQsubtraction", (DL_FUNC) &_ratioOfQsprays_ROQsubtraction, 4},
    {"_ratioOfQsprays_ROQmultiplication", (DL_FUNC) &_ratioOfQsprays_ROQmultiplication, 4},
    {"_ratioOfQsprays_ROQdivision", (DL_FUNC) &_ratioOfQsprays_ROQdivision, 4},
    {"_ratioOfQsprays_ROQpower", (DL_FUNC) &_ratioOfQsprays_ROQpower, 3},
    {"_ratioOfQsprays_ROQequality", (DL_FUNC) &_ratioOfQsprays_ROQequality, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_ratioOfQsprays(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
