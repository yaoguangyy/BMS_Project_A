#include "ne_ds.h"
#include "Battery_Model_981c414b_49_ds_sys_struct.h"
#include "Battery_Model_981c414b_49_ds_y.h"
#include "Battery_Model_981c414b_49_ds.h"
#include "Battery_Model_981c414b_49_ds_externals.h"
#include "Battery_Model_981c414b_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_49_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t13 , NeDsMethodOutput * out ) { ( void ) LC ; out ->
mY . mX [ 0ULL ] = t13 -> mX . mX [ 50ULL ] - t13 -> mX . mX [ 51ULL ] ; out
-> mY . mX [ 1ULL ] = t13 -> mX . mX [ 51ULL ] - t13 -> mX . mX [ 52ULL ] ;
out -> mY . mX [ 2ULL ] = t13 -> mX . mX [ 52ULL ] - t13 -> mX . mX [ 53ULL ]
; out -> mY . mX [ 3ULL ] = t13 -> mX . mX [ 53ULL ] - t13 -> mX . mX [ 54ULL
] ; out -> mY . mX [ 4ULL ] = t13 -> mX . mX [ 54ULL ] - t13 -> mX . mX [
55ULL ] ; out -> mY . mX [ 5ULL ] = t13 -> mX . mX [ 55ULL ] ; out -> mY . mX
[ 17ULL ] = t13 -> mX . mX [ 40ULL ] ; out -> mY . mX [ 12ULL ] = t13 -> mX .
mX [ 32ULL ] ; out -> mY . mX [ 13ULL ] = t13 -> mX . mX [ 24ULL ] ; out ->
mY . mX [ 14ULL ] = t13 -> mX . mX [ 16ULL ] ; out -> mY . mX [ 15ULL ] = t13
-> mX . mX [ 8ULL ] ; out -> mY . mX [ 16ULL ] = t13 -> mX . mX [ 0ULL ] ;
out -> mY . mX [ 18ULL ] = ( ( ( t13 -> mX . mX [ 51ULL ] * 0.05 + t13 -> mX
. mX [ 52ULL ] * - 0.05 ) + t13 -> mX . mX [ 58ULL ] * - 0.05 ) + t13 -> mX .
mX [ 59ULL ] * - 0.05 ) + t13 -> mX . mX [ 71ULL ] ; out -> mY . mX [ 19ULL ]
= t13 -> mX . mX [ 50ULL ] ; out -> mY . mX [ 21ULL ] = ( ( ( ( ( ( ( t13 ->
mX . mX [ 51ULL ] * - 5.0000000000000008E-11 + t13 -> mX . mX [ 52ULL ] *
5.0000000000000008E-11 ) + t13 -> mX . mX [ 58ULL ] * 5.0000000000000008E-11
) + t13 -> mX . mX [ 59ULL ] * 5.0000000000000008E-11 ) + t13 -> mX . mX [
71ULL ] * - 1.0E-9 ) + t13 -> mX . mX [ 105ULL ] * - 1.0E-9 ) + t13 -> mU .
mX [ 7ULL ] * 1.0E-9 ) + t13 -> mU . mX [ 8ULL ] * 1.0E-9 ) + t13 -> mX . mX
[ 48ULL ] ; out -> mY . mX [ 20ULL ] = t13 -> mX . mX [ 105ULL ] * 1.0E-9 +
t13 -> mX . mX [ 49ULL ] ; out -> mY . mX [ 6ULL ] = t13 -> mX . mX [ 72ULL ]
; out -> mY . mX [ 7ULL ] = t13 -> mX . mX [ 78ULL ] ; out -> mY . mX [ 8ULL
] = t13 -> mX . mX [ 84ULL ] ; out -> mY . mX [ 9ULL ] = t13 -> mX . mX [
90ULL ] ; out -> mY . mX [ 10ULL ] = t13 -> mX . mX [ 96ULL ] ; out -> mY .
mX [ 11ULL ] = t13 -> mX . mX [ 102ULL ] ; ( void ) LC ; ( void ) out ;
return 0 ; }
