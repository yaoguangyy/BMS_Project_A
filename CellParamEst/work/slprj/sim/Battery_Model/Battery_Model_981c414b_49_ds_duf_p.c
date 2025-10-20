#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_duf_p.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_duf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 16 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 2 , 5 , 5 , 5 , 5 , 5
, 5 , 5 } ; static int32_T _cg_const_2 [ 5 ] = { 106 , 108 , 106 , 107 , 108
} ; ( void ) t1 ; ( void ) LC ; out -> mDUF_P . mNumCol = 15ULL ; out ->
mDUF_P . mNumRow = 110ULL ; out -> mDUF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ;
out -> mDUF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDUF_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mDUF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mDUF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mDUF_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mDUF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mDUF_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mDUF_P . mJc [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mDUF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mDUF_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mDUF_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mDUF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mDUF_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mDUF_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mDUF_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out ->
mDUF_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mDUF_P . mIr [ 1 ] =
_cg_const_2 [ 1 ] ; out -> mDUF_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out ->
mDUF_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out -> mDUF_P . mIr [ 4 ] =
_cg_const_2 [ 4 ] ; ( void ) LC ; ( void ) out ; return 0 ; }
