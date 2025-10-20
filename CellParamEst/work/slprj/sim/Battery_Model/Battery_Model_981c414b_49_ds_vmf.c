#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_vmf.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_vmf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 110 ] = { true , true , true , false , false , false , false ,
false , true , true , true , false , false , false , false , false , true ,
true , true , false , false , false , false , false , true , true , true ,
false , false , false , false , false , true , true , true , false , false ,
false , false , false , true , true , true , false , false , false , false ,
false , false , false , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true } ; int32_T i ; ( void
) t1 ; ( void ) LC ; for ( i = 0 ; i < 110 ; i ++ ) { out -> mVMF . mX [ i ]
= _cg_const_1 [ i ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
