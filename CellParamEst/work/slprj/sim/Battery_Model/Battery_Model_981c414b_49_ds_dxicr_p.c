#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_dxicr_p.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_dxicr_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 111 ] = { 0 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 3 , 3 , 4 , 4 , 4
, 4 , 4 , 4 , 5 , 5 , 6 , 6 , 6 , 6 , 6 , 6 , 7 , 7 , 8 , 8 , 8 , 8 , 8 , 8 ,
9 , 9 , 10 , 10 , 10 , 10 , 10 , 10 , 11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 ,
12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12
, 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 ,
12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12
, 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 }
; int32_T i ; ( void ) t1 ; ( void ) LC ; out -> mDXICR_P . mNumCol = 110ULL
; out -> mDXICR_P . mNumRow = 12ULL ; for ( i = 0 ; i < 111 ; i ++ ) { out ->
mDXICR_P . mJc [ i ] = _cg_const_1 [ i ] ; } out -> mDXICR_P . mIr [ 0 ] = 0
; out -> mDXICR_P . mIr [ 1 ] = 1 ; out -> mDXICR_P . mIr [ 2 ] = 2 ; out ->
mDXICR_P . mIr [ 3 ] = 3 ; out -> mDXICR_P . mIr [ 4 ] = 4 ; out -> mDXICR_P
. mIr [ 5 ] = 5 ; out -> mDXICR_P . mIr [ 6 ] = 6 ; out -> mDXICR_P . mIr [ 7
] = 7 ; out -> mDXICR_P . mIr [ 8 ] = 8 ; out -> mDXICR_P . mIr [ 9 ] = 9 ;
out -> mDXICR_P . mIr [ 10 ] = 10 ; out -> mDXICR_P . mIr [ 11 ] = 11 ; ( void
) LC ; ( void ) out ; return 0 ; }
