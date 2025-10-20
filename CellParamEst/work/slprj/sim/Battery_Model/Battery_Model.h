#ifndef Battery_Model_h_
#define Battery_Model_h_
#ifndef Battery_Model_COMMON_INCLUDES_
#define Battery_Model_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "math.h"
#include "nesl_rtw_rtp.h"
#include "Battery_Model_981c414b_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "Battery_Model_types.h"
#include <stddef.h>
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_nonfinite.h"
#include <string.h>
extern struct_Cy8NVN8uTaBKVtp81w17x rtP__Battery2f2Battery_1Pack_1RC_sldd_ ;
extern real_T rtP__TempInit2f2DD_Battery_sldd_ ; extern void hyhvfhhfpt ( void
) ; extern void co2jgaw45l ( void ) ; extern void efpnu0fedq ( void ) ;
extern void ekhh3qmd23 ( void ) ; extern void Battery_Model ( const SRE *
p0kzyezpty , const real32_T * mkdg2nw0t2 , const real32_T * mcpby2uc00 ,
const real32_T * blng4244sk , const boolean_T * ezezhr3fbo , const boolean_T
* p4c5irnvaj , const boolean_T * mkzqeq05cf , const boolean_T * fyhoidy225 ,
const boolean_T * nnlfxu3kr3 , const boolean_T * g3mwi3or3q , const boolean_T
mlddsh1g4n [ 6 ] , real32_T crjpt4umym [ 6 ] , real32_T * gr210t4cxd ,
real32_T * i5e1kzsjlx , real32_T * klcxmdsfug , real32_T * ayk4ytbpya ,
real32_T atbdgyptbn [ 6 ] ) ; extern void Battery_ModelTID2 ( void ) ; extern
void g2a0amkjsr ( void ) ; extern void civyaaklvw ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_Battery_Model_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Battery_Model_GetDWork ( )
; extern void mr_Battery_Model_SetDWork ( const mxArray * ssDW ) ; extern
void mr_Battery_Model_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_Battery_Model_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Battery_Model_GetCAPIStaticMap ( void ) ;
void mr_Battery_Model_CreateInitRestoreData ( ) ; void
mr_Battery_Model_CopyFromInitRestoreData ( ) ; void
mr_Battery_Model_DestroyInitRestoreData ( ) ;
#endif
