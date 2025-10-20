#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_dxy.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_dxy ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t48 , NeDsMethodOutput * out ) { real_T t2 [ 4 ] ;
real_T t3 [ 4 ] ; size_t t12 ; ( void ) t48 ; ( void ) LC ; t2 [ 2ULL ] =
0.05 ; out -> mDXY . mX [ 5ULL ] = 1.0 ; out -> mDXY . mX [ 4ULL ] = 1.0 ;
out -> mDXY . mX [ 3ULL ] = 1.0 ; out -> mDXY . mX [ 2ULL ] = 1.0 ; out ->
mDXY . mX [ 1ULL ] = 1.0 ; out -> mDXY . mX [ 0ULL ] = 1.0 ; t2 [ 3ULL ] = -
5.0000000000000008E-11 ; out -> mDXY . mX [ 6ULL ] = 1.0 ; out -> mDXY . mX [
7ULL ] = 1.0 ; t2 [ 0ULL ] = - 1.0 ; t2 [ 1ULL ] = 1.0 ; t3 [ 0ULL ] = - 1.0
; t3 [ 1ULL ] = 1.0 ; t3 [ 2ULL ] = - 0.05 ; t3 [ 3ULL ] =
5.0000000000000008E-11 ; out -> mDXY . mX [ 8ULL ] = 1.0 ; out -> mDXY . mX [
9ULL ] = 1.0 ; for ( t12 = 0ULL ; t12 < 4ULL ; t12 ++ ) { out -> mDXY . mX [
t12 + 10ULL ] = t2 [ t12 ] ; } for ( t12 = 0ULL ; t12 < 4ULL ; t12 ++ ) { out
-> mDXY . mX [ t12 + 14ULL ] = t3 [ t12 ] ; } out -> mDXY . mX [ 18ULL ] = -
1.0 ; out -> mDXY . mX [ 19ULL ] = 1.0 ; out -> mDXY . mX [ 20ULL ] = - 1.0 ;
out -> mDXY . mX [ 21ULL ] = 1.0 ; out -> mDXY . mX [ 22ULL ] = - 1.0 ; out
-> mDXY . mX [ 23ULL ] = 1.0 ; out -> mDXY . mX [ 24ULL ] = - 0.05 ; out ->
mDXY . mX [ 25ULL ] = 5.0000000000000008E-11 ; out -> mDXY . mX [ 26ULL ] = -
0.05 ; out -> mDXY . mX [ 27ULL ] = 5.0000000000000008E-11 ; out -> mDXY . mX
[ 28ULL ] = 1.0 ; out -> mDXY . mX [ 29ULL ] = - 1.0E-9 ; out -> mDXY . mX [
30ULL ] = 1.0 ; out -> mDXY . mX [ 31ULL ] = 1.0 ; out -> mDXY . mX [ 32ULL ]
= 1.0 ; out -> mDXY . mX [ 33ULL ] = 1.0 ; out -> mDXY . mX [ 34ULL ] = 1.0 ;
out -> mDXY . mX [ 35ULL ] = 1.0 ; out -> mDXY . mX [ 36ULL ] = 1.0E-9 ; out
-> mDXY . mX [ 37ULL ] = - 1.0E-9 ; ( void ) LC ; ( void ) out ; return 0 ; }
