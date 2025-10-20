#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_acon.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_acon ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t173 , NeDsMethodOutput * out ) { real_T t14 [
13 ] ; real_T t15 [ 13 ] ; real_T t31 [ 13 ] ; real_T t21 [ 11 ] ; real_T t22
[ 11 ] ; real_T t16 [ 6 ] ; real_T t17 [ 6 ] ; real_T t18 [ 6 ] ; real_T t2 [
5 ] ; size_t t59 ; ( void ) t173 ; ( void ) LC ; out -> mACON . mX [ 0ULL ] =
- 0.00050950000000000008 ; t2 [ 0 ] = - 0.31510977251054734 ; t2 [ 1 ] = -
0.31510977251054734 ; t2 [ 2 ] = - 0.31510977251054734 ; t2 [ 3 ] = -
0.31510977251054734 ; t2 [ 4 ] = - 0.31510977251054734 ; t14 [ 0ULL ] = 0.05
; t14 [ 1ULL ] = 1.3623331827136496E-6 ; t14 [ 2ULL ] = 0.05 ; t14 [ 3ULL ] =
1.3623331827136496E-6 ; t14 [ 4ULL ] = 0.05 ; t14 [ 5ULL ] =
1.3623331827136496E-6 ; t14 [ 6ULL ] = 0.05 ; t14 [ 7ULL ] =
1.3623331827136496E-6 ; t14 [ 8ULL ] = 0.1 ; t14 [ 9ULL ] =
2.7246663654272991E-6 ; t14 [ 10ULL ] = 0.05 ; t14 [ 11ULL ] =
0.31510977251054734 ; t14 [ 12ULL ] = - 0.31510977251054734 ; t15 [ 0ULL ] =
- 0.05 ; t15 [ 1ULL ] = - 1.3623331827136496E-6 ; t15 [ 2ULL ] = - 0.05 ; t15
[ 3ULL ] = - 1.3623331827136496E-6 ; t15 [ 4ULL ] = - 0.05 ; t15 [ 5ULL ] = -
1.3623331827136496E-6 ; t15 [ 6ULL ] = - 0.1 ; t15 [ 7ULL ] = -
2.7246663654272991E-6 ; t15 [ 8ULL ] = - 0.05 ; t15 [ 9ULL ] = -
1.3623331827136496E-6 ; t15 [ 10ULL ] = - 0.05 ; t15 [ 11ULL ] =
0.31510977251054734 ; t15 [ 12ULL ] = - 0.31510977251054734 ; t16 [ 0ULL ] =
- 0.05 ; t16 [ 1ULL ] = - 1.3623331827136496E-6 ; t16 [ 2ULL ] = 0.05 ; t16 [
3ULL ] = 1.3623331827136496E-6 ; t16 [ 4ULL ] = 0.31510977251054734 ; t16 [
5ULL ] = - 0.31510977251054734 ; t17 [ 0ULL ] = - 0.05 ; t17 [ 1ULL ] = -
1.3623331827136496E-6 ; t17 [ 2ULL ] = 0.05 ; t17 [ 3ULL ] =
1.3623331827136496E-6 ; t17 [ 4ULL ] = 0.31510977251054734 ; t17 [ 5ULL ] = -
0.31510977251054734 ; t18 [ 0ULL ] = - 0.05 ; t18 [ 1ULL ] = -
1.3623331827136496E-6 ; t18 [ 2ULL ] = 0.05 ; t18 [ 3ULL ] =
1.3623331827136496E-6 ; t18 [ 4ULL ] = 0.31510977251054734 ; t18 [ 5ULL ] = -
0.31510977251054734 ; t21 [ 0ULL ] = - 0.05 ; t21 [ 1ULL ] = -
1.3623331827136496E-6 ; t21 [ 2ULL ] = - 0.05 ; t21 [ 3ULL ] = -
1.3623331827136496E-6 ; t21 [ 4ULL ] = - 0.05 ; t21 [ 5ULL ] = -
1.3623331827136496E-6 ; t21 [ 6ULL ] = - 0.05 ; t21 [ 7ULL ] = -
1.3623331827136496E-6 ; t21 [ 8ULL ] = - 0.05 ; t21 [ 9ULL ] = -
1.3623331827136496E-6 ; t21 [ 10ULL ] = - 0.05 ; t22 [ 0ULL ] = - 0.05 ; t22
[ 1ULL ] = - 1.3623331827136496E-6 ; t22 [ 2ULL ] = - 0.05 ; t22 [ 3ULL ] = -
1.3623331827136496E-6 ; t22 [ 4ULL ] = - 0.05 ; t22 [ 5ULL ] = -
1.3623331827136496E-6 ; t22 [ 6ULL ] = - 0.05 ; t22 [ 7ULL ] = -
1.3623331827136496E-6 ; t22 [ 8ULL ] = - 0.05 ; t22 [ 9ULL ] = -
1.3623331827136496E-6 ; t22 [ 10ULL ] = - 0.05 ; t31 [ 0ULL ] = 1.0 ; t31 [
1ULL ] = 2.7246663654272989E-5 ; t31 [ 2ULL ] = 1.0 ; t31 [ 3ULL ] =
2.7246663654272989E-5 ; t31 [ 4ULL ] = 1.0 ; t31 [ 5ULL ] =
2.7246663654272989E-5 ; t31 [ 6ULL ] = 1.0 ; t31 [ 7ULL ] =
2.7246663654272989E-5 ; t31 [ 8ULL ] = 1.0 ; t31 [ 9ULL ] =
2.7246663654272989E-5 ; t31 [ 10ULL ] = 1.0 ; t31 [ 11ULL ] =
2.7246663654272989E-5 ; t31 [ 12ULL ] = 1.0 ; out -> mACON . mX [ 1ULL ] =
0.00050950000000000008 ; for ( t59 = 0ULL ; t59 < 5ULL ; t59 ++ ) { out ->
mACON . mX [ t59 + 2ULL ] = t2 [ t59 ] ; } out -> mACON . mX [ 7ULL ] =
0.00050950000000000008 ; out -> mACON . mX [ 8ULL ] = - 0.0010190000000000002
; out -> mACON . mX [ 9ULL ] = 0.00050950000000000008 ; for ( t59 = 0ULL ;
t59 < 5ULL ; t59 ++ ) { out -> mACON . mX [ t59 + 10ULL ] = t2 [ t59 ] ; }
out -> mACON . mX [ 15ULL ] = 0.00050950000000000008 ; out -> mACON . mX [
16ULL ] = - 0.0010190000000000002 ; out -> mACON . mX [ 17ULL ] =
0.00050950000000000008 ; for ( t59 = 0ULL ; t59 < 5ULL ; t59 ++ ) { out ->
mACON . mX [ t59 + 18ULL ] = t2 [ t59 ] ; } out -> mACON . mX [ 23ULL ] =
0.00050950000000000008 ; out -> mACON . mX [ 24ULL ] = -
0.0010190000000000002 ; out -> mACON . mX [ 25ULL ] = 0.00050950000000000008
; for ( t59 = 0ULL ; t59 < 5ULL ; t59 ++ ) { out -> mACON . mX [ t59 + 26ULL
] = t2 [ t59 ] ; } out -> mACON . mX [ 31ULL ] = 0.00050950000000000008 ; out
-> mACON . mX [ 32ULL ] = - 0.0010190000000000002 ; out -> mACON . mX [ 33ULL
] = 0.00050950000000000008 ; for ( t59 = 0ULL ; t59 < 5ULL ; t59 ++ ) { out
-> mACON . mX [ t59 + 34ULL ] = t2 [ t59 ] ; } out -> mACON . mX [ 39ULL ] =
0.00050950000000000008 ; out -> mACON . mX [ 40ULL ] = -
0.0010190000000000002 ; for ( t59 = 0ULL ; t59 < 5ULL ; t59 ++ ) { out ->
mACON . mX [ t59 + 41ULL ] = t2 [ t59 ] ; } out -> mACON . mX [ 46ULL ] = -
0.0 ; out -> mACON . mX [ 47ULL ] = - 0.0 ; out -> mACON . mX [ 48ULL ] = -
0.05 ; out -> mACON . mX [ 49ULL ] = - 1.3623331827136496E-6 ; out -> mACON .
mX [ 50ULL ] = 0.31510977251054734 ; for ( t59 = 0ULL ; t59 < 13ULL ; t59 ++
) { out -> mACON . mX [ t59 + 51ULL ] = t14 [ t59 ] ; } for ( t59 = 0ULL ;
t59 < 13ULL ; t59 ++ ) { out -> mACON . mX [ t59 + 64ULL ] = t15 [ t59 ] ; }
for ( t59 = 0ULL ; t59 < 6ULL ; t59 ++ ) { out -> mACON . mX [ t59 + 77ULL ]
= t16 [ t59 ] ; } for ( t59 = 0ULL ; t59 < 6ULL ; t59 ++ ) { out -> mACON .
mX [ t59 + 83ULL ] = t17 [ t59 ] ; } for ( t59 = 0ULL ; t59 < 6ULL ; t59 ++ )
{ out -> mACON . mX [ t59 + 89ULL ] = t18 [ t59 ] ; } out -> mACON . mX [
95ULL ] = 0.05 ; out -> mACON . mX [ 96ULL ] = 1.3623331827136496E-6 ; out ->
mACON . mX [ 97ULL ] = 0.05 ; out -> mACON . mX [ 98ULL ] =
1.3623331827136496E-6 ; for ( t59 = 0ULL ; t59 < 11ULL ; t59 ++ ) { out ->
mACON . mX [ t59 + 99ULL ] = t21 [ t59 ] ; } for ( t59 = 0ULL ; t59 < 11ULL ;
t59 ++ ) { out -> mACON . mX [ t59 + 110ULL ] = t22 [ t59 ] ; } out -> mACON
. mX [ 121ULL ] = 0.05 ; out -> mACON . mX [ 122ULL ] = 1.3623331827136496E-6
; out -> mACON . mX [ 123ULL ] = 0.05 ; out -> mACON . mX [ 124ULL ] =
1.3623331827136496E-6 ; out -> mACON . mX [ 125ULL ] = 0.05 ; out -> mACON .
mX [ 126ULL ] = 1.3623331827136496E-6 ; out -> mACON . mX [ 127ULL ] = 0.05 ;
out -> mACON . mX [ 128ULL ] = 1.3623331827136496E-6 ; out -> mACON . mX [
129ULL ] = 0.05 ; out -> mACON . mX [ 130ULL ] = 1.3623331827136496E-6 ; out
-> mACON . mX [ 131ULL ] = 0.05 ; out -> mACON . mX [ 132ULL ] =
1.3623331827136496E-6 ; out -> mACON . mX [ 133ULL ] = 0.05 ; out -> mACON .
mX [ 134ULL ] = 1.3623331827136496E-6 ; out -> mACON . mX [ 135ULL ] = 0.05 ;
out -> mACON . mX [ 136ULL ] = 1.3623331827136496E-6 ; out -> mACON . mX [
137ULL ] = 1.0 ; out -> mACON . mX [ 138ULL ] = 1.0 ; out -> mACON . mX [
139ULL ] = 1.0 ; for ( t59 = 0ULL ; t59 < 13ULL ; t59 ++ ) { out -> mACON .
mX [ t59 + 140ULL ] = t31 [ t59 ] ; } out -> mACON . mX [ 153ULL ] = 1.0 ;
out -> mACON . mX [ 154ULL ] = 0.064993278996132442 ; out -> mACON . mX [
155ULL ] = 1.0 ; out -> mACON . mX [ 156ULL ] = 1.0 ; out -> mACON . mX [
157ULL ] = 1.0 ; out -> mACON . mX [ 158ULL ] = 1.0 ; out -> mACON . mX [
159ULL ] = 1.0 ; out -> mACON . mX [ 160ULL ] = 1.0 ; out -> mACON . mX [
161ULL ] = 0.064993278996132442 ; out -> mACON . mX [ 162ULL ] = 1.0 ; out ->
mACON . mX [ 163ULL ] = 1.0 ; out -> mACON . mX [ 164ULL ] = 1.0 ; out ->
mACON . mX [ 165ULL ] = 1.0 ; out -> mACON . mX [ 166ULL ] = 1.0 ; out ->
mACON . mX [ 167ULL ] = 1.0 ; out -> mACON . mX [ 168ULL ] =
0.064993278996132442 ; out -> mACON . mX [ 169ULL ] = 1.0 ; out -> mACON . mX
[ 170ULL ] = 1.0 ; out -> mACON . mX [ 171ULL ] = 1.0 ; out -> mACON . mX [
172ULL ] = 1.0 ; out -> mACON . mX [ 173ULL ] = 1.0 ; out -> mACON . mX [
174ULL ] = 1.0 ; out -> mACON . mX [ 175ULL ] = 0.064993278996132442 ; out ->
mACON . mX [ 176ULL ] = 1.0 ; out -> mACON . mX [ 177ULL ] = 1.0 ; out ->
mACON . mX [ 178ULL ] = 1.0 ; out -> mACON . mX [ 179ULL ] = 1.0 ; out ->
mACON . mX [ 180ULL ] = 1.0 ; out -> mACON . mX [ 181ULL ] = 1.0 ; out ->
mACON . mX [ 182ULL ] = 0.064993278996132442 ; out -> mACON . mX [ 183ULL ] =
1.0 ; out -> mACON . mX [ 184ULL ] = 1.0 ; out -> mACON . mX [ 185ULL ] = 1.0
; out -> mACON . mX [ 186ULL ] = 1.0 ; out -> mACON . mX [ 187ULL ] = 1.0 ;
out -> mACON . mX [ 188ULL ] = 1.0 ; out -> mACON . mX [ 189ULL ] =
0.064993278996132442 ; out -> mACON . mX [ 190ULL ] = 1.0 ; out -> mACON . mX
[ 191ULL ] = 1.0 ; out -> mACON . mX [ 192ULL ] = 1.0 ; out -> mACON . mX [
193ULL ] = - 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
