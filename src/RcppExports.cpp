// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Connect
bool Connect(String host, int port);
RcppExport SEXP _RDolphinDB_Connect(SEXP hostSEXP, SEXP portSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type host(hostSEXP);
    Rcpp::traits::input_parameter< int >::type port(portSEXP);
    rcpp_result_gen = Rcpp::wrap(Connect(host, port));
    return rcpp_result_gen;
END_RCPP
}
// RunScript
int RunScript(String script);
RcppExport SEXP _RDolphinDB_RunScript(SEXP scriptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type script(scriptSEXP);
    rcpp_result_gen = Rcpp::wrap(RunScript(script));
    return rcpp_result_gen;
END_RCPP
}
// RunFunctionInit
bool RunFunctionInit(String func, int arg_size);
RcppExport SEXP _RDolphinDB_RunFunctionInit(SEXP funcSEXP, SEXP arg_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type func(funcSEXP);
    Rcpp::traits::input_parameter< int >::type arg_size(arg_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(RunFunctionInit(func, arg_size));
    return rcpp_result_gen;
END_RCPP
}
// RunUploadInit
bool RunUploadInit(CharacterVector R_keys);
RcppExport SEXP _RDolphinDB_RunUploadInit(SEXP R_keysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type R_keys(R_keysSEXP);
    rcpp_result_gen = Rcpp::wrap(RunUploadInit(R_keys));
    return rcpp_result_gen;
END_RCPP
}
// ReceiveHeader
bool ReceiveHeader();
RcppExport SEXP _RDolphinDB_ReceiveHeader() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReceiveHeader());
    return rcpp_result_gen;
END_RCPP
}
// ReceiveEntity
int ReceiveEntity();
RcppExport SEXP _RDolphinDB_ReceiveEntity() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReceiveEntity());
    return rcpp_result_gen;
END_RCPP
}
// UploadVectorDateTime
void UploadVectorDateTime(CharacterVector R_vec, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadVectorDateTime(SEXP R_vecSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type R_vec(R_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadVectorDateTime(R_vec, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadScalarDateTime
void UploadScalarDateTime(String date_time_str);
RcppExport SEXP _RDolphinDB_UploadScalarDateTime(SEXP date_time_strSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type date_time_str(date_time_strSEXP);
    UploadScalarDateTime(date_time_str);
    return R_NilValue;
END_RCPP
}
// UploadVectorDate
void UploadVectorDate(CharacterVector R_vec, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadVectorDate(SEXP R_vecSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type R_vec(R_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadVectorDate(R_vec, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadScalarDate
void UploadScalarDate(String date_str);
RcppExport SEXP _RDolphinDB_UploadScalarDate(SEXP date_strSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type date_str(date_strSEXP);
    UploadScalarDate(date_str);
    return R_NilValue;
END_RCPP
}
// UploadTableBasic
void UploadTableBasic(int row, int clm, CharacterVector Colnames);
RcppExport SEXP _RDolphinDB_UploadTableBasic(SEXP rowSEXP, SEXP clmSEXP, SEXP ColnamesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type clm(clmSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type Colnames(ColnamesSEXP);
    UploadTableBasic(row, clm, Colnames);
    return R_NilValue;
END_RCPP
}
// UploadMatrixNULL
void UploadMatrixNULL(int row, int clm);
RcppExport SEXP _RDolphinDB_UploadMatrixNULL(SEXP rowSEXP, SEXP clmSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type clm(clmSEXP);
    UploadMatrixNULL(row, clm);
    return R_NilValue;
END_RCPP
}
// UploadMatrixLableFlag
void UploadMatrixLableFlag(int flag);
RcppExport SEXP _RDolphinDB_UploadMatrixLableFlag(SEXP flagSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type flag(flagSEXP);
    UploadMatrixLableFlag(flag);
    return R_NilValue;
END_RCPP
}
// UploadMatrixFlag
void UploadMatrixFlag(int flag);
RcppExport SEXP _RDolphinDB_UploadMatrixFlag(SEXP flagSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type flag(flagSEXP);
    UploadMatrixFlag(flag);
    return R_NilValue;
END_RCPP
}
// UploadMatrixBool
void UploadMatrixBool(LogicalMatrix R_mtx, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadMatrixBool(SEXP R_mtxSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type R_mtx(R_mtxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadMatrixBool(R_mtx, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadMatrixInt
void UploadMatrixInt(IntegerMatrix R_mtx, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadMatrixInt(SEXP R_mtxSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type R_mtx(R_mtxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadMatrixInt(R_mtx, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadMatrixDouble
void UploadMatrixDouble(NumericMatrix R_mtx, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadMatrixDouble(SEXP R_mtxSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type R_mtx(R_mtxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadMatrixDouble(R_mtx, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadVectorString
void UploadVectorString(CharacterVector R_vec, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadVectorString(SEXP R_vecSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type R_vec(R_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadVectorString(R_vec, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadVectorDouble
void UploadVectorDouble(NumericVector R_vec, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadVectorDouble(SEXP R_vecSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type R_vec(R_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadVectorDouble(R_vec, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadVectorBool
void UploadVectorBool(LogicalVector R_vec, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadVectorBool(SEXP R_vecSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type R_vec(R_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadVectorBool(R_vec, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadVectorInt
void UploadVectorInt(IntegerVector R_vec, IntegerVector R_NAIndex);
RcppExport SEXP _RDolphinDB_UploadVectorInt(SEXP R_vecSEXP, SEXP R_NAIndexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type R_vec(R_vecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type R_NAIndex(R_NAIndexSEXP);
    UploadVectorInt(R_vec, R_NAIndex);
    return R_NilValue;
END_RCPP
}
// UploadVectorNULL
void UploadVectorNULL(int row, int clm);
RcppExport SEXP _RDolphinDB_UploadVectorNULL(SEXP rowSEXP, SEXP clmSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type clm(clmSEXP);
    UploadVectorNULL(row, clm);
    return R_NilValue;
END_RCPP
}
// UploadScalarInt
void UploadScalarInt(int val);
RcppExport SEXP _RDolphinDB_UploadScalarInt(SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type val(valSEXP);
    UploadScalarInt(val);
    return R_NilValue;
END_RCPP
}
// UploadScalarBool
void UploadScalarBool(bool val);
RcppExport SEXP _RDolphinDB_UploadScalarBool(SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type val(valSEXP);
    UploadScalarBool(val);
    return R_NilValue;
END_RCPP
}
// UploadScalarNULL
void UploadScalarNULL();
RcppExport SEXP _RDolphinDB_UploadScalarNULL() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    UploadScalarNULL();
    return R_NilValue;
END_RCPP
}
// UploadScalarDouble
void UploadScalarDouble(double val);
RcppExport SEXP _RDolphinDB_UploadScalarDouble(SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type val(valSEXP);
    UploadScalarDouble(val);
    return R_NilValue;
END_RCPP
}
// UploadScalarString
void UploadScalarString(String val);
RcppExport SEXP _RDolphinDB_UploadScalarString(SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type val(valSEXP);
    UploadScalarString(val);
    return R_NilValue;
END_RCPP
}
// Clear
void Clear();
RcppExport SEXP _RDolphinDB_Clear() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Clear();
    return R_NilValue;
END_RCPP
}
// DisConnect
void DisConnect();
RcppExport SEXP _RDolphinDB_DisConnect() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    DisConnect();
    return R_NilValue;
END_RCPP
}
// ReturnScalarNA
bool ReturnScalarNA();
RcppExport SEXP _RDolphinDB_ReturnScalarNA() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnScalarNA());
    return rcpp_result_gen;
END_RCPP
}
// ReturnScalarBool
bool ReturnScalarBool();
RcppExport SEXP _RDolphinDB_ReturnScalarBool() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnScalarBool());
    return rcpp_result_gen;
END_RCPP
}
// ReturnScalarInt
int ReturnScalarInt();
RcppExport SEXP _RDolphinDB_ReturnScalarInt() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnScalarInt());
    return rcpp_result_gen;
END_RCPP
}
// ReturnScalarDouble
double ReturnScalarDouble();
RcppExport SEXP _RDolphinDB_ReturnScalarDouble() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnScalarDouble());
    return rcpp_result_gen;
END_RCPP
}
// ReturnScalarString
String ReturnScalarString();
RcppExport SEXP _RDolphinDB_ReturnScalarString() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnScalarString());
    return rcpp_result_gen;
END_RCPP
}
// ReturnVectorBool
LogicalVector ReturnVectorBool();
RcppExport SEXP _RDolphinDB_ReturnVectorBool() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnVectorBool());
    return rcpp_result_gen;
END_RCPP
}
// ReturnVectorInt
IntegerVector ReturnVectorInt();
RcppExport SEXP _RDolphinDB_ReturnVectorInt() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnVectorInt());
    return rcpp_result_gen;
END_RCPP
}
// ReturnVectorDouble
NumericVector ReturnVectorDouble();
RcppExport SEXP _RDolphinDB_ReturnVectorDouble() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnVectorDouble());
    return rcpp_result_gen;
END_RCPP
}
// ReturnVectorString
CharacterVector ReturnVectorString();
RcppExport SEXP _RDolphinDB_ReturnVectorString() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnVectorString());
    return rcpp_result_gen;
END_RCPP
}
// ReturnVectorNAIndex
IntegerVector ReturnVectorNAIndex();
RcppExport SEXP _RDolphinDB_ReturnVectorNAIndex() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnVectorNAIndex());
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixHasLable
bool ReturnMatrixHasLable(bool row);
RcppExport SEXP _RDolphinDB_ReturnMatrixHasLable(SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixHasLable(row));
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixLableType
int ReturnMatrixLableType(bool row);
RcppExport SEXP _RDolphinDB_ReturnMatrixLableType(SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixLableType(row));
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixLableNAIndex
IntegerVector ReturnMatrixLableNAIndex(bool row);
RcppExport SEXP _RDolphinDB_ReturnMatrixLableNAIndex(SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixLableNAIndex(row));
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixVectorBoolLable
LogicalVector ReturnMatrixVectorBoolLable(bool row);
RcppExport SEXP _RDolphinDB_ReturnMatrixVectorBoolLable(SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixVectorBoolLable(row));
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixVectorIntLable
IntegerVector ReturnMatrixVectorIntLable(bool row);
RcppExport SEXP _RDolphinDB_ReturnMatrixVectorIntLable(SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixVectorIntLable(row));
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixVectorDoubleLable
NumericVector ReturnMatrixVectorDoubleLable(bool row);
RcppExport SEXP _RDolphinDB_ReturnMatrixVectorDoubleLable(SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixVectorDoubleLable(row));
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixVectorStringLable
CharacterVector ReturnMatrixVectorStringLable(bool row);
RcppExport SEXP _RDolphinDB_ReturnMatrixVectorStringLable(SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixVectorStringLable(row));
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixBool
LogicalMatrix ReturnMatrixBool();
RcppExport SEXP _RDolphinDB_ReturnMatrixBool() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixBool());
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixInt
IntegerMatrix ReturnMatrixInt();
RcppExport SEXP _RDolphinDB_ReturnMatrixInt() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixInt());
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixDouble
NumericMatrix ReturnMatrixDouble();
RcppExport SEXP _RDolphinDB_ReturnMatrixDouble() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixDouble());
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixString
CharacterMatrix ReturnMatrixString();
RcppExport SEXP _RDolphinDB_ReturnMatrixString() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixString());
    return rcpp_result_gen;
END_RCPP
}
// ReturnMatrixNAIndex
IntegerVector ReturnMatrixNAIndex();
RcppExport SEXP _RDolphinDB_ReturnMatrixNAIndex() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnMatrixNAIndex());
    return rcpp_result_gen;
END_RCPP
}
// ReturnTableColumnType
IntegerVector ReturnTableColumnType();
RcppExport SEXP _RDolphinDB_ReturnTableColumnType() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnTableColumnType());
    return rcpp_result_gen;
END_RCPP
}
// ReturnTableColumeName
CharacterVector ReturnTableColumeName();
RcppExport SEXP _RDolphinDB_ReturnTableColumeName() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnTableColumeName());
    return rcpp_result_gen;
END_RCPP
}
// ReturnEmptyDataFrame
DataFrame ReturnEmptyDataFrame();
RcppExport SEXP _RDolphinDB_ReturnEmptyDataFrame() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnEmptyDataFrame());
    return rcpp_result_gen;
END_RCPP
}
// ReturnTableColumnLogical
LogicalVector ReturnTableColumnLogical(int index);
RcppExport SEXP _RDolphinDB_ReturnTableColumnLogical(SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnTableColumnLogical(index));
    return rcpp_result_gen;
END_RCPP
}
// ReturnTableColumnInteger
IntegerVector ReturnTableColumnInteger(int index);
RcppExport SEXP _RDolphinDB_ReturnTableColumnInteger(SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnTableColumnInteger(index));
    return rcpp_result_gen;
END_RCPP
}
// ReturnTableColumnDouble
NumericVector ReturnTableColumnDouble(int index);
RcppExport SEXP _RDolphinDB_ReturnTableColumnDouble(SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnTableColumnDouble(index));
    return rcpp_result_gen;
END_RCPP
}
// ReturnTableColumnString
CharacterVector ReturnTableColumnString(int index);
RcppExport SEXP _RDolphinDB_ReturnTableColumnString(SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnTableColumnString(index));
    return rcpp_result_gen;
END_RCPP
}
// ReturnTableColumnNAIndex
IntegerVector ReturnTableColumnNAIndex(int index);
RcppExport SEXP _RDolphinDB_ReturnTableColumnNAIndex(SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(ReturnTableColumnNAIndex(index));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RDolphinDB_Connect", (DL_FUNC) &_RDolphinDB_Connect, 2},
    {"_RDolphinDB_RunScript", (DL_FUNC) &_RDolphinDB_RunScript, 1},
    {"_RDolphinDB_RunFunctionInit", (DL_FUNC) &_RDolphinDB_RunFunctionInit, 2},
    {"_RDolphinDB_RunUploadInit", (DL_FUNC) &_RDolphinDB_RunUploadInit, 1},
    {"_RDolphinDB_ReceiveHeader", (DL_FUNC) &_RDolphinDB_ReceiveHeader, 0},
    {"_RDolphinDB_ReceiveEntity", (DL_FUNC) &_RDolphinDB_ReceiveEntity, 0},
    {"_RDolphinDB_UploadVectorDateTime", (DL_FUNC) &_RDolphinDB_UploadVectorDateTime, 2},
    {"_RDolphinDB_UploadScalarDateTime", (DL_FUNC) &_RDolphinDB_UploadScalarDateTime, 1},
    {"_RDolphinDB_UploadVectorDate", (DL_FUNC) &_RDolphinDB_UploadVectorDate, 2},
    {"_RDolphinDB_UploadScalarDate", (DL_FUNC) &_RDolphinDB_UploadScalarDate, 1},
    {"_RDolphinDB_UploadTableBasic", (DL_FUNC) &_RDolphinDB_UploadTableBasic, 3},
    {"_RDolphinDB_UploadMatrixNULL", (DL_FUNC) &_RDolphinDB_UploadMatrixNULL, 2},
    {"_RDolphinDB_UploadMatrixLableFlag", (DL_FUNC) &_RDolphinDB_UploadMatrixLableFlag, 1},
    {"_RDolphinDB_UploadMatrixFlag", (DL_FUNC) &_RDolphinDB_UploadMatrixFlag, 1},
    {"_RDolphinDB_UploadMatrixBool", (DL_FUNC) &_RDolphinDB_UploadMatrixBool, 2},
    {"_RDolphinDB_UploadMatrixInt", (DL_FUNC) &_RDolphinDB_UploadMatrixInt, 2},
    {"_RDolphinDB_UploadMatrixDouble", (DL_FUNC) &_RDolphinDB_UploadMatrixDouble, 2},
    {"_RDolphinDB_UploadVectorString", (DL_FUNC) &_RDolphinDB_UploadVectorString, 2},
    {"_RDolphinDB_UploadVectorDouble", (DL_FUNC) &_RDolphinDB_UploadVectorDouble, 2},
    {"_RDolphinDB_UploadVectorBool", (DL_FUNC) &_RDolphinDB_UploadVectorBool, 2},
    {"_RDolphinDB_UploadVectorInt", (DL_FUNC) &_RDolphinDB_UploadVectorInt, 2},
    {"_RDolphinDB_UploadVectorNULL", (DL_FUNC) &_RDolphinDB_UploadVectorNULL, 2},
    {"_RDolphinDB_UploadScalarInt", (DL_FUNC) &_RDolphinDB_UploadScalarInt, 1},
    {"_RDolphinDB_UploadScalarBool", (DL_FUNC) &_RDolphinDB_UploadScalarBool, 1},
    {"_RDolphinDB_UploadScalarNULL", (DL_FUNC) &_RDolphinDB_UploadScalarNULL, 0},
    {"_RDolphinDB_UploadScalarDouble", (DL_FUNC) &_RDolphinDB_UploadScalarDouble, 1},
    {"_RDolphinDB_UploadScalarString", (DL_FUNC) &_RDolphinDB_UploadScalarString, 1},
    {"_RDolphinDB_Clear", (DL_FUNC) &_RDolphinDB_Clear, 0},
    {"_RDolphinDB_DisConnect", (DL_FUNC) &_RDolphinDB_DisConnect, 0},
    {"_RDolphinDB_ReturnScalarNA", (DL_FUNC) &_RDolphinDB_ReturnScalarNA, 0},
    {"_RDolphinDB_ReturnScalarBool", (DL_FUNC) &_RDolphinDB_ReturnScalarBool, 0},
    {"_RDolphinDB_ReturnScalarInt", (DL_FUNC) &_RDolphinDB_ReturnScalarInt, 0},
    {"_RDolphinDB_ReturnScalarDouble", (DL_FUNC) &_RDolphinDB_ReturnScalarDouble, 0},
    {"_RDolphinDB_ReturnScalarString", (DL_FUNC) &_RDolphinDB_ReturnScalarString, 0},
    {"_RDolphinDB_ReturnVectorBool", (DL_FUNC) &_RDolphinDB_ReturnVectorBool, 0},
    {"_RDolphinDB_ReturnVectorInt", (DL_FUNC) &_RDolphinDB_ReturnVectorInt, 0},
    {"_RDolphinDB_ReturnVectorDouble", (DL_FUNC) &_RDolphinDB_ReturnVectorDouble, 0},
    {"_RDolphinDB_ReturnVectorString", (DL_FUNC) &_RDolphinDB_ReturnVectorString, 0},
    {"_RDolphinDB_ReturnVectorNAIndex", (DL_FUNC) &_RDolphinDB_ReturnVectorNAIndex, 0},
    {"_RDolphinDB_ReturnMatrixHasLable", (DL_FUNC) &_RDolphinDB_ReturnMatrixHasLable, 1},
    {"_RDolphinDB_ReturnMatrixLableType", (DL_FUNC) &_RDolphinDB_ReturnMatrixLableType, 1},
    {"_RDolphinDB_ReturnMatrixLableNAIndex", (DL_FUNC) &_RDolphinDB_ReturnMatrixLableNAIndex, 1},
    {"_RDolphinDB_ReturnMatrixVectorBoolLable", (DL_FUNC) &_RDolphinDB_ReturnMatrixVectorBoolLable, 1},
    {"_RDolphinDB_ReturnMatrixVectorIntLable", (DL_FUNC) &_RDolphinDB_ReturnMatrixVectorIntLable, 1},
    {"_RDolphinDB_ReturnMatrixVectorDoubleLable", (DL_FUNC) &_RDolphinDB_ReturnMatrixVectorDoubleLable, 1},
    {"_RDolphinDB_ReturnMatrixVectorStringLable", (DL_FUNC) &_RDolphinDB_ReturnMatrixVectorStringLable, 1},
    {"_RDolphinDB_ReturnMatrixBool", (DL_FUNC) &_RDolphinDB_ReturnMatrixBool, 0},
    {"_RDolphinDB_ReturnMatrixInt", (DL_FUNC) &_RDolphinDB_ReturnMatrixInt, 0},
    {"_RDolphinDB_ReturnMatrixDouble", (DL_FUNC) &_RDolphinDB_ReturnMatrixDouble, 0},
    {"_RDolphinDB_ReturnMatrixString", (DL_FUNC) &_RDolphinDB_ReturnMatrixString, 0},
    {"_RDolphinDB_ReturnMatrixNAIndex", (DL_FUNC) &_RDolphinDB_ReturnMatrixNAIndex, 0},
    {"_RDolphinDB_ReturnTableColumnType", (DL_FUNC) &_RDolphinDB_ReturnTableColumnType, 0},
    {"_RDolphinDB_ReturnTableColumeName", (DL_FUNC) &_RDolphinDB_ReturnTableColumeName, 0},
    {"_RDolphinDB_ReturnEmptyDataFrame", (DL_FUNC) &_RDolphinDB_ReturnEmptyDataFrame, 0},
    {"_RDolphinDB_ReturnTableColumnLogical", (DL_FUNC) &_RDolphinDB_ReturnTableColumnLogical, 1},
    {"_RDolphinDB_ReturnTableColumnInteger", (DL_FUNC) &_RDolphinDB_ReturnTableColumnInteger, 1},
    {"_RDolphinDB_ReturnTableColumnDouble", (DL_FUNC) &_RDolphinDB_ReturnTableColumnDouble, 1},
    {"_RDolphinDB_ReturnTableColumnString", (DL_FUNC) &_RDolphinDB_ReturnTableColumnString, 1},
    {"_RDolphinDB_ReturnTableColumnNAIndex", (DL_FUNC) &_RDolphinDB_ReturnTableColumnNAIndex, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RDolphinDB(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}