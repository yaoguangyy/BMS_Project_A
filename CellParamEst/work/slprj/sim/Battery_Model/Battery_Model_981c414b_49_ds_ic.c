#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_ic.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_ic ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t3 , NeDsMethodOutput * out ) { size_t t2 ; ( void )
LC ; out -> mIC . mX [ 0ULL ] = 298.15 ; out -> mIC . mX [ 1ULL ] = 0.0 ; out
-> mIC . mX [ 2ULL ] = 0.0 ; for ( t2 = 3ULL ; t2 - 3ULL < 5ULL ; t2 ++ ) {
out -> mIC . mX [ t2 ] = 0.0 ; } out -> mIC . mX [ 8ULL ] = 298.15 ; out ->
mIC . mX [ 9ULL ] = 0.0 ; out -> mIC . mX [ 10ULL ] = 0.0 ; for ( t2 = 11ULL
; t2 - 11ULL < 5ULL ; t2 ++ ) { out -> mIC . mX [ t2 ] = 0.0 ; } out -> mIC .
mX [ 16ULL ] = 298.15 ; out -> mIC . mX [ 17ULL ] = 0.0 ; out -> mIC . mX [
18ULL ] = 0.0 ; for ( t2 = 19ULL ; t2 - 19ULL < 5ULL ; t2 ++ ) { out -> mIC .
mX [ t2 ] = 0.0 ; } out -> mIC . mX [ 24ULL ] = 298.15 ; out -> mIC . mX [
25ULL ] = 0.0 ; out -> mIC . mX [ 26ULL ] = 0.0 ; for ( t2 = 27ULL ; t2 -
27ULL < 5ULL ; t2 ++ ) { out -> mIC . mX [ t2 ] = 0.0 ; } out -> mIC . mX [
32ULL ] = 298.15 ; out -> mIC . mX [ 33ULL ] = 0.0 ; out -> mIC . mX [ 34ULL
] = 0.0 ; for ( t2 = 35ULL ; t2 - 35ULL < 5ULL ; t2 ++ ) { out -> mIC . mX [
t2 ] = 0.0 ; } out -> mIC . mX [ 40ULL ] = 298.15 ; out -> mIC . mX [ 41ULL ]
= 0.0 ; out -> mIC . mX [ 42ULL ] = 0.0 ; for ( t2 = 43ULL ; t2 - 43ULL <
5ULL ; t2 ++ ) { out -> mIC . mX [ t2 ] = 0.0 ; } out -> mIC . mX [ 48ULL ] =
0.0 ; out -> mIC . mX [ 49ULL ] = 0.0 ; out -> mIC . mX [ 50ULL ] = 0.0 ; out
-> mIC . mX [ 51ULL ] = 0.0 ; out -> mIC . mX [ 52ULL ] = 0.0 ; out -> mIC .
mX [ 53ULL ] = 0.0 ; out -> mIC . mX [ 54ULL ] = 0.0 ; out -> mIC . mX [
55ULL ] = 0.0 ; out -> mIC . mX [ 56ULL ] = 0.0 ; out -> mIC . mX [ 57ULL ] =
0.0 ; out -> mIC . mX [ 58ULL ] = 0.0 ; out -> mIC . mX [ 59ULL ] = 0.0 ; out
-> mIC . mX [ 60ULL ] = 0.0 ; out -> mIC . mX [ 61ULL ] = 0.0 ; out -> mIC .
mX [ 62ULL ] = 0.0 ; out -> mIC . mX [ 63ULL ] = 0.0 ; out -> mIC . mX [
64ULL ] = 0.0 ; out -> mIC . mX [ 65ULL ] = 0.0 ; out -> mIC . mX [ 66ULL ] =
0.0 ; out -> mIC . mX [ 67ULL ] = 0.0 ; out -> mIC . mX [ 68ULL ] = 1.0 ; out
-> mIC . mX [ 69ULL ] = 1.0 ; out -> mIC . mX [ 70ULL ] = 1.0 ; out -> mIC .
mX [ 71ULL ] = 0.0 ; out -> mIC . mX [ 72ULL ] = t3 -> mP_R . mX [ 0ULL ] ;
out -> mIC . mX [ 73ULL ] = 1000.0 ; out -> mIC . mX [ 74ULL ] = 0.0 ; out ->
mIC . mX [ 75ULL ] = 1.0 ; out -> mIC . mX [ 76ULL ] = 1.0 ; out -> mIC . mX
[ 77ULL ] = 1.0 ; out -> mIC . mX [ 78ULL ] = t3 -> mP_R . mX [ 1ULL ] ; out
-> mIC . mX [ 79ULL ] = 1000.0 ; out -> mIC . mX [ 80ULL ] = 0.0 ; out -> mIC
. mX [ 81ULL ] = 1.0 ; out -> mIC . mX [ 82ULL ] = 1.0 ; out -> mIC . mX [
83ULL ] = 1.0 ; out -> mIC . mX [ 84ULL ] = t3 -> mP_R . mX [ 2ULL ] ; out ->
mIC . mX [ 85ULL ] = 1000.0 ; out -> mIC . mX [ 86ULL ] = 0.0 ; out -> mIC .
mX [ 87ULL ] = 1.0 ; out -> mIC . mX [ 88ULL ] = 1.0 ; out -> mIC . mX [
89ULL ] = 1.0 ; out -> mIC . mX [ 90ULL ] = t3 -> mP_R . mX [ 3ULL ] ; out ->
mIC . mX [ 91ULL ] = 1000.0 ; out -> mIC . mX [ 92ULL ] = 0.0 ; out -> mIC .
mX [ 93ULL ] = 1.0 ; out -> mIC . mX [ 94ULL ] = 1.0 ; out -> mIC . mX [
95ULL ] = 1.0 ; out -> mIC . mX [ 96ULL ] = t3 -> mP_R . mX [ 4ULL ] ; out ->
mIC . mX [ 97ULL ] = 1000.0 ; out -> mIC . mX [ 98ULL ] = 0.0 ; out -> mIC .
mX [ 99ULL ] = 1.0 ; out -> mIC . mX [ 100ULL ] = 1.0 ; out -> mIC . mX [
101ULL ] = 1.0 ; out -> mIC . mX [ 102ULL ] = t3 -> mP_R . mX [ 5ULL ] ; out
-> mIC . mX [ 103ULL ] = 1000.0 ; out -> mIC . mX [ 104ULL ] = 0.0 ; out ->
mIC . mX [ 105ULL ] = 0.0 ; out -> mIC . mX [ 106ULL ] = 0.0 ; out -> mIC .
mX [ 107ULL ] = 0.0 ; out -> mIC . mX [ 108ULL ] = 0.0 ; out -> mIC . mX [
109ULL ] = 0.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
