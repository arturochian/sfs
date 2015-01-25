// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gdal_register_all
void gdal_register_all();
RcppExport SEXP sfs_gdal_register_all() {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        gdal_register_all();
    }
    return R_NilValue;
END_RCPP
}
// get_gdal_drivers
Rcpp::DataFrame get_gdal_drivers();
RcppExport SEXP sfs_get_gdal_drivers() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::DataFrame __result = get_gdal_drivers();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// read_ogr
Rcpp::S4 read_ogr(std::string file, int layer_index = 0);
RcppExport SEXP sfs_read_ogr(SEXP fileSEXP, SEXP layer_indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type file(fileSEXP );
        Rcpp::traits::input_parameter< int >::type layer_index(layer_indexSEXP );
        Rcpp::S4 __result = read_ogr(file, layer_index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// polygon_signed_area
double polygon_signed_area(Rcpp::NumericMatrix m);
RcppExport SEXP sfs_polygon_signed_area(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type m(mSEXP );
        double __result = polygon_signed_area(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// is_cw
bool is_cw(Rcpp::NumericMatrix m);
RcppExport SEXP sfs_is_cw(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type m(mSEXP );
        bool __result = is_cw(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ogr_register_all
void ogr_register_all();
RcppExport SEXP sfs_ogr_register_all() {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        ogr_register_all();
    }
    return R_NilValue;
END_RCPP
}
// ogr_cleanup_all
void ogr_cleanup_all();
RcppExport SEXP sfs_ogr_cleanup_all() {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        ogr_cleanup_all();
    }
    return R_NilValue;
END_RCPP
}
// ogr_drivers
Rcpp::DataFrame ogr_drivers();
RcppExport SEXP sfs_ogr_drivers() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::DataFrame __result = ogr_drivers();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// dump_ogr
void dump_ogr(std::string file = "test.geojson");
RcppExport SEXP sfs_dump_ogr(SEXP fileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type file(fileSEXP );
        dump_ogr(file);
    }
    return R_NilValue;
END_RCPP
}
// dump2_ogr
void dump2_ogr(std::string file = "test.geojson");
RcppExport SEXP sfs_dump2_ogr(SEXP fileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type file(fileSEXP );
        dump2_ogr(file);
    }
    return R_NilValue;
END_RCPP
}
