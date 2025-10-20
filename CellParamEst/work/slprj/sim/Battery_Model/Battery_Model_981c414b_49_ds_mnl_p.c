#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_mnl_p.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_mnl_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 111 ] = { 0 , 0 , 0 , 0 , 1 , 2 , 3 , 4 , 5 , 5 , 5 , 5 , 6 , 7
, 8 , 9 , 10 , 10 , 10 , 10 , 11 , 12 , 13 , 14 , 15 , 15 , 15 , 15 , 16 , 17
, 18 , 19 , 20 , 20 , 20 , 20 , 21 , 22 , 23 , 24 , 25 , 25 , 25 , 25 , 26 ,
27 , 28 , 29 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30
, 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 ,
30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30
, 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 , 30 ,
30 , 30 , 30 , 30 } ; static int32_T _cg_const_2 [ 30 ] = { 2 , 2 , 2 , 2 , 2
, 10 , 10 , 10 , 10 , 10 , 18 , 18 , 18 , 18 , 18 , 26 , 26 , 26 , 26 , 26 ,
34 , 34 , 34 , 34 , 34 , 42 , 42 , 42 , 42 , 42 } ; int32_T i ; ( void ) t1 ;
( void ) LC ; out -> mMNL_P . mNumCol = 110ULL ; out -> mMNL_P . mNumRow =
110ULL ; for ( i = 0 ; i < 111 ; i ++ ) { out -> mMNL_P . mJc [ i ] =
_cg_const_1 [ i ] ; } out -> mMNL_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out ->
mMNL_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mMNL_P . mIr [ 2 ] =
_cg_const_2 [ 2 ] ; out -> mMNL_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out ->
mMNL_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out -> mMNL_P . mIr [ 5 ] =
_cg_const_2 [ 5 ] ; out -> mMNL_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out ->
mMNL_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out -> mMNL_P . mIr [ 8 ] =
_cg_const_2 [ 8 ] ; out -> mMNL_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; out ->
mMNL_P . mIr [ 10 ] = _cg_const_2 [ 10 ] ; out -> mMNL_P . mIr [ 11 ] =
_cg_const_2 [ 11 ] ; out -> mMNL_P . mIr [ 12 ] = _cg_const_2 [ 12 ] ; out ->
mMNL_P . mIr [ 13 ] = _cg_const_2 [ 13 ] ; out -> mMNL_P . mIr [ 14 ] =
_cg_const_2 [ 14 ] ; out -> mMNL_P . mIr [ 15 ] = _cg_const_2 [ 15 ] ; out ->
mMNL_P . mIr [ 16 ] = _cg_const_2 [ 16 ] ; out -> mMNL_P . mIr [ 17 ] =
_cg_const_2 [ 17 ] ; out -> mMNL_P . mIr [ 18 ] = _cg_const_2 [ 18 ] ; out ->
mMNL_P . mIr [ 19 ] = _cg_const_2 [ 19 ] ; out -> mMNL_P . mIr [ 20 ] =
_cg_const_2 [ 20 ] ; out -> mMNL_P . mIr [ 21 ] = _cg_const_2 [ 21 ] ; out ->
mMNL_P . mIr [ 22 ] = _cg_const_2 [ 22 ] ; out -> mMNL_P . mIr [ 23 ] =
_cg_const_2 [ 23 ] ; out -> mMNL_P . mIr [ 24 ] = _cg_const_2 [ 24 ] ; out ->
mMNL_P . mIr [ 25 ] = _cg_const_2 [ 25 ] ; out -> mMNL_P . mIr [ 26 ] =
_cg_const_2 [ 26 ] ; out -> mMNL_P . mIr [ 27 ] = _cg_const_2 [ 27 ] ; out ->
mMNL_P . mIr [ 28 ] = _cg_const_2 [ 28 ] ; out -> mMNL_P . mIr [ 29 ] =
_cg_const_2 [ 29 ] ; ( void ) LC ; ( void ) out ; return 0 ; }
