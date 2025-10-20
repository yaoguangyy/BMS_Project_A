#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_dxy_p.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_dxy_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 111 ] = { 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2
, 2 , 2 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 ,
5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 6 , 7 , 8 , 10 ,
14 , 18 , 20 , 22 , 24 , 24 , 24 , 26 , 28 , 28 , 28 , 28 , 28 , 28 , 28 , 28
, 28 , 28 , 28 , 28 , 30 , 31 , 31 , 31 , 31 , 31 , 31 , 32 , 32 , 32 , 32 ,
32 , 32 , 33 , 33 , 33 , 33 , 33 , 33 , 34 , 34 , 34 , 34 , 34 , 34 , 35 , 35
, 35 , 35 , 35 , 35 , 36 , 36 , 36 , 38 , 38 , 38 , 38 , 38 } ; static
int32_T _cg_const_2 [ 38 ] = { 16 , 15 , 14 , 13 , 12 , 17 , 21 , 20 , 0 , 19
, 0 , 1 , 18 , 21 , 1 , 2 , 18 , 21 , 2 , 3 , 3 , 4 , 4 , 5 , 18 , 21 , 18 ,
21 , 18 , 21 , 6 , 7 , 8 , 9 , 10 , 11 , 20 , 21 } ; int32_T i ; ( void ) t1
; ( void ) LC ; out -> mDXY_P . mNumCol = 110ULL ; out -> mDXY_P . mNumRow =
22ULL ; for ( i = 0 ; i < 111 ; i ++ ) { out -> mDXY_P . mJc [ i ] =
_cg_const_1 [ i ] ; } out -> mDXY_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out ->
mDXY_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mDXY_P . mIr [ 2 ] =
_cg_const_2 [ 2 ] ; out -> mDXY_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out ->
mDXY_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out -> mDXY_P . mIr [ 5 ] =
_cg_const_2 [ 5 ] ; out -> mDXY_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out ->
mDXY_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out -> mDXY_P . mIr [ 8 ] =
_cg_const_2 [ 8 ] ; out -> mDXY_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; out ->
mDXY_P . mIr [ 10 ] = _cg_const_2 [ 10 ] ; out -> mDXY_P . mIr [ 11 ] =
_cg_const_2 [ 11 ] ; out -> mDXY_P . mIr [ 12 ] = _cg_const_2 [ 12 ] ; out ->
mDXY_P . mIr [ 13 ] = _cg_const_2 [ 13 ] ; out -> mDXY_P . mIr [ 14 ] =
_cg_const_2 [ 14 ] ; out -> mDXY_P . mIr [ 15 ] = _cg_const_2 [ 15 ] ; out ->
mDXY_P . mIr [ 16 ] = _cg_const_2 [ 16 ] ; out -> mDXY_P . mIr [ 17 ] =
_cg_const_2 [ 17 ] ; out -> mDXY_P . mIr [ 18 ] = _cg_const_2 [ 18 ] ; out ->
mDXY_P . mIr [ 19 ] = _cg_const_2 [ 19 ] ; out -> mDXY_P . mIr [ 20 ] =
_cg_const_2 [ 20 ] ; out -> mDXY_P . mIr [ 21 ] = _cg_const_2 [ 21 ] ; out ->
mDXY_P . mIr [ 22 ] = _cg_const_2 [ 22 ] ; out -> mDXY_P . mIr [ 23 ] =
_cg_const_2 [ 23 ] ; out -> mDXY_P . mIr [ 24 ] = _cg_const_2 [ 24 ] ; out ->
mDXY_P . mIr [ 25 ] = _cg_const_2 [ 25 ] ; out -> mDXY_P . mIr [ 26 ] =
_cg_const_2 [ 26 ] ; out -> mDXY_P . mIr [ 27 ] = _cg_const_2 [ 27 ] ; out ->
mDXY_P . mIr [ 28 ] = _cg_const_2 [ 28 ] ; out -> mDXY_P . mIr [ 29 ] =
_cg_const_2 [ 29 ] ; out -> mDXY_P . mIr [ 30 ] = _cg_const_2 [ 30 ] ; out ->
mDXY_P . mIr [ 31 ] = _cg_const_2 [ 31 ] ; out -> mDXY_P . mIr [ 32 ] =
_cg_const_2 [ 32 ] ; out -> mDXY_P . mIr [ 33 ] = _cg_const_2 [ 33 ] ; out ->
mDXY_P . mIr [ 34 ] = _cg_const_2 [ 34 ] ; out -> mDXY_P . mIr [ 35 ] =
_cg_const_2 [ 35 ] ; out -> mDXY_P . mIr [ 36 ] = _cg_const_2 [ 36 ] ; out ->
mDXY_P . mIr [ 37 ] = _cg_const_2 [ 37 ] ; ( void ) LC ; ( void ) out ;
return 0 ; }
