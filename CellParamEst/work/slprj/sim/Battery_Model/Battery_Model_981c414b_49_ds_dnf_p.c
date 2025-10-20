#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_dnf_p.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_dnf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 117 ] = { 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 2 , 2 , 3 , 3 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 5 , 5 , 5 , 5
, 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 ,
5 , 5 , 6 , 6 , 6 , 6 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 8 , 8 , 8 , 8 , 8 , 8 , 8
, 8 , 9 , 10 , 10 , 11 , 11 , 11 , 11 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12
, 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 , 12 } ; static int32_T _cg_const_2 [
12 ] = { 65 , 78 , 86 , 99 , 71 , 72 , 93 , 100 , 79 , 92 , 64 , 85 } ;
int32_T i ; ( void ) t1 ; ( void ) LC ; out -> mDNF_P . mNumCol = 116ULL ;
out -> mDNF_P . mNumRow = 110ULL ; for ( i = 0 ; i < 117 ; i ++ ) { out ->
mDNF_P . mJc [ i ] = _cg_const_1 [ i ] ; } out -> mDNF_P . mIr [ 0 ] =
_cg_const_2 [ 0 ] ; out -> mDNF_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out ->
mDNF_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out -> mDNF_P . mIr [ 3 ] =
_cg_const_2 [ 3 ] ; out -> mDNF_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out ->
mDNF_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out -> mDNF_P . mIr [ 6 ] =
_cg_const_2 [ 6 ] ; out -> mDNF_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out ->
mDNF_P . mIr [ 8 ] = _cg_const_2 [ 8 ] ; out -> mDNF_P . mIr [ 9 ] =
_cg_const_2 [ 9 ] ; out -> mDNF_P . mIr [ 10 ] = _cg_const_2 [ 10 ] ; out ->
mDNF_P . mIr [ 11 ] = _cg_const_2 [ 11 ] ; ( void ) LC ; ( void ) out ;
return 0 ; }
