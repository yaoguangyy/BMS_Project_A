#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_vmm.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_vmm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 170 ] = { false , false , false , true , false , false , false
, false , true , false , false , false , false , true , false , false , false
, false , true , false , false , false , false , true , false , false , false
, false , false , false , false , true , false , false , false , false , true
, false , false , false , false , true , false , false , false , false , true
, false , false , false , false , true , false , false , false , false ,
false , false , false , true , false , false , false , false , true , false ,
false , false , false , true , false , false , false , false , true , false ,
false , false , false , true , false , false , false , false , false , false
, false , true , false , false , false , false , true , false , false , false
, false , true , false , false , false , false , true , false , false , false
, false , true , false , false , false , false , false , false , false , true
, false , false , false , false , true , false , false , false , false , true
, false , false , false , false , true , false , false , false , false , true
, false , false , false , false , false , false , false , true , false ,
false , false , false , true , false , false , false , false , true , false ,
false , false , false , true , false , false , false , false , true , false ,
false , false , false , false , false } ; int32_T i ; ( void ) t1 ; ( void )
LC ; for ( i = 0 ; i < 170 ; i ++ ) { out -> mVMM . mX [ i ] = _cg_const_1 [
i ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
