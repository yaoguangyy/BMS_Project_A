#ifndef Battery_Model_private_h_
#define Battery_Model_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "Battery_Model.h"
#include "rtw_modelmap_simtarget.h"
#include "Battery_Model_types.h"
#include "simtarget/slMdlrefSimTargetCoreHeaders.h"
#include "simtarget/slMdlrefSimTargetInstrumentationHeaders.h"
#include "messages/slMessagesSfcnBridge.h"
#include "sl_fileio_rtw.h"
extern const char_T * rt_GetMatSignalLoggingFileName ( void ) ; extern const
char_T * rt_GetMatSigLogSelectorFileName ( void ) ; extern void *
rt_GetOSigstreamManager ( void ) ; extern void * *
rt_GetOSigstreamManagerAddr ( void ) ; extern void * rt_slioCatalogue ( void
) ; extern void * * rt_slioCatalogueAddr ( void ) ; extern void
rt_ssSet_slErrMsg ( void * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsWarning ( void * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) ; extern const char_T
* rt_CreateFullPathToTop ( const char_T * toppath , const char_T * subpath )
; extern boolean_T slIsRapidAcceleratorSimulating ( void ) ; extern void
rt_RAccelReplaceFromFilename ( const char_T * blockpath , char_T * fileNam )
; extern void rt_RAccelReplaceToFilename ( const char_T * blockpath , char_T
* fileNam ) ; extern void slsaCacheDWorkPointerForSimTargetOP ( void * ss ,
void * * ptr ) ; extern void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) ; extern void
slsaSaveRawMemoryForSimTargetOP ( void * ss , const char_T * key , void * *
ptr , unsigned int sizeInBytes , void * ( * customOPSaveFcn ) ( void *
dworkPtr , unsigned int * sizeInBytes ) , void ( * customOPRestoreFcn ) ( void
* dworkPtr , const void * data , unsigned int sizeInBytes ) ) ; extern void *
gblLoggingInterval ;
#ifndef rtmCancelTimerToRaiseEvent
#define rtmCancelTimerToRaiseEvent(rtm, timerIndex) simTgtCancelTimerToRaiseEvent(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex])
#endif
#ifndef rtmDisableTaskUsingRateIndex
#define rtmDisableTaskUsingRateIndex(rtm, sti) simTgtDisableTaskUsingRateIndex(_ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[sti])
#endif
#ifndef rtmEnableTaskUsingRateIndex
#define rtmEnableTaskUsingRateIndex(rtm, sti) simTgtEnableTaskUsingRateIndex(_ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[sti])
#endif
#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm) ssIsFirstInitCond((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm) ssIsMajorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm) ssIsMinorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmRaiseEvent
#define rtmRaiseEvent(rtm, runtimeEventIndex) simTgtRaiseEvent(_ssGetRootSS((rtm)->_mdlRefSfcnS), [runtimeEventIndex])
#endif
#ifndef rtmRaiseEventWithEnqueue
#define rtmRaiseEventWithEnqueue(rtm, runtimeEventIndex) simTgtRaiseEventWithEnqueue(_ssGetRootSS((rtm)->_mdlRefSfcnS), [runtimeEventIndex])
#endif
#ifndef rtmRaiseWhenTimerExpiresAfter
#define rtmRaiseWhenTimerExpiresAfter(rtm, timerIndex, isRecurring, afterDur, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAfter(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex], isRecurring, afterDur, [runtimeEventIndex])
#endif
#ifndef rtmRaiseWhenTimerExpiresAt
#define rtmRaiseWhenTimerExpiresAt(rtm, timerIndex, atT, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAt(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex], atT, [runtimeEventIndex])
#endif
typedef struct { real_T dv [ 266 ] ; real_T dv1 [ 266 ] ; real_T dv2 [ 60 ] ;
real_T dv3 [ 60 ] ; real_T nbjyjcl3of_mbvzarwird [ 21 ] ; real_T dv4 [ 12 ] ;
int_T iv [ 17 ] ; int_T iv1 [ 17 ] ; NeModelParameters modelParameters ;
NeModelParameters modelParameters_cl54gopm0x ; NeModelParameters
modelParameters_kkiq3xxxve ; int_T iv2 [ 16 ] ; int_T iv3 [ 16 ] ;
NeParameterBundle expl_temp ; real_T hqnniod1fn ; real_T ipzxhtbvnl [ 4 ] ;
real_T ikip1rkaab [ 4 ] ; real_T pgmfdtmhia [ 4 ] ; real_T bxnjml5vyi [ 4 ] ;
real_T fa3lsigh0j [ 4 ] ; real_T hl2nfdipq1 [ 4 ] ; real_T jajfpgabc5 [ 4 ] ;
real_T cjuiar0lak [ 4 ] ; real_T ltgg51ogf0 [ 4 ] ; real_T mji2pkxzvm [ 4 ] ;
real_T icftnz3dum [ 4 ] ; real_T mkvlwfmezj [ 4 ] ; real_T bldb1xmu3o [ 4 ] ;
real_T akoot5ciiv [ 4 ] ; real_T i5y3egb1m2 [ 4 ] ; real_T pumfepmo15 ;
real_T l1kp4lvfoi [ 206 ] ; real_T time ; real_T time_cxarnvbvui ; real_T
time_bhxxfovxdy ; real_T time_pbm3vprmfu ; real_T time_cv5hdgrwft ; real_T
time_fqdqrf4qbc ; real_T eiukhbjcze_g2mlkqadfk ; real_T jvlqkv5fyv_g1smspu5ke
; real_T eiukhbjcze_tmp ; real_T d ; int8_T cvkhavxlrg_merlcviukg [ 6 ] ;
int32_T isHit ; int32_T isHit_nz4o0shxby ; int32_T isHit_ppxrqq0gsf ; int32_T
i ; int32_T i_llw0u2ae0v ; int8_T lzpphy55rp ; int8_T evemxad5xg ; int8_T
eumjml0ycu_jwzvbuczlb ; boolean_T hy4fq30l40 ; boolean_T
m2h4gmmqnl_dhmrxtyqop ; boolean_T b ; boolean_T val ; } osmg53lo42o ; typedef
struct { real_T d34b0okjqr [ 2 ] ; real_T lmwx10n042 [ 2 ] ; real_T
majp2d0t15 [ 2 ] ; real_T ewmuhywexp [ 2 ] ; real_T fpepwecug3 [ 2 ] ; real_T
azahjn1ojt [ 2 ] ; real_T fjaxxupdb1 [ 2 ] ; real_T ct4y0w43hs [ 2 ] ; real_T
i0erlbo3qq [ 2 ] ; real_T cv1b00ffxo [ 2 ] ; real_T fiwfx5yw42 [ 2 ] ; real_T
n1lc3tk3ng [ 2 ] ; real_T ln1b0eqlbz [ 2 ] ; real_T nzuavay5j2 [ 2 ] ; real_T
gi2satt5z1 [ 2 ] ; real_T bdrdfiqnt5 [ 110 ] ; real_T pd5iac2miw ; real_T
lnkatngh1g ; real_T ll5ealgwz4 ; real_T lc4xd53jqy ; real_T htrwe3bkh4 ;
struct { void * AQHandles ; } nuq4v43qhy ; void * l5sy50b5zn ; void *
kpitnwer40 ; void * mkd2spih2s ; void * pfdzwnuhop ; void * ixgbyeweng ; void
* p0ewb0p2rv ; void * ninhxr4fck ; void * cit41hblo0 ; void * ojxbbeygjk ;
void * fneuxht5zz ; void * enzhvtdcpt ; struct { void * AQHandles ; }
hswcqf3moi ; void * iu1sepdskg ; void * oee5glwfmi ; void * ldtzzmx1mf ; void
* eqtdl3gxl0 ; void * np2gql3d2g ; struct { void * AQHandles ; } oyzx0samzr ;
struct { void * AQHandles ; } a52tnzhwod ; int_T oqfoisfonm [ 96 ] ; int_T
mile0wblyv ; int_T a3hvylotsc ; uint8_T ikq3bhusoa ; uint8_T o5hzuhxh00 ;
uint8_T n2c2aotymw ; uint8_T d25gdv4qho ; uint8_T f3ccloittv ; uint8_T
glea21liwu ; boolean_T op1wlzvy2t ; boolean_T fpaxggsz2m ; boolean_T
fjpvnssfnv ; boolean_T hbt31irajz ; } lvqzg0r2xcl ; struct nqwmswlblnu_ {
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
real_T P_8 [ 24741 ] ; real_T P_9 ; real_T P_10 [ 24741 ] ; real_T P_11 ;
real_T P_12 ; real_T P_13 ; int8_T P_14 ; int8_T P_15 ; } ; struct ak0flpomfp
{ struct SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi
; rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress
[ 16 ] ; int32_T * vardimsAddress [ 16 ] ; RTWLoggingFcnPtr loggingPtrs [ 16
] ; sysRanDType * systemRan [ 4 ] ; int_T systemTid [ 4 ] ; } DataMapInfo ; }
;
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) ((rtm)->DataMapInfo)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) ((rtm)->DataMapInfo = (val))
#endif
#ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[0])
#endif
#ifndef rtmGetClockTick1
#define rtmGetClockTick1(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[1])
#endif
#ifndef rtmGetClockTick2
#define rtmGetClockTick2(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[2])
#endif
#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[0])
#endif
#ifndef rtmGetClockTickH1
#define rtmGetClockTickH1(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[1])
#endif
#ifndef rtmGetClockTickH2
#define rtmGetClockTickH2(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[2])
#endif
#ifndef rtmGetLogOutput
#define rtmGetLogOutput(rtm) ssGetLogOutput((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmSetSampleHit
#define rtmSetSampleHit(rtm, sti, tid, val) _ssSetSampleHit(_ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[sti], val)
#endif
#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid) ssIsSampleHit( _ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[sti], tid)
#endif
#ifndef rtmGetT
#define rtmGetT(rtm) (ssGetT((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm) (ssGetTFinal((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTNextWasAdjusted
#define rtmGetTNextWasAdjusted(rtm, sti) (ssGetTNextWasAdjusted((rtm)->_mdlRefSfcnS,  el50fl4kem[sti]))
#endif
#ifndef rtmGetTStart
#define rtmGetTStart(rtm) (ssGetTStart((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti) ssGetTaskTime( _ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[sti])
#endif
#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val) _ssSetTaskTime(_ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[sti], val)
#endif
#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm) (ssGetTimeOfLastOutput((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetVarNextHitTime
#define rtmGetVarNextHitTime(rtm, sti) (_ssGetVarNextHitTime((rtm)->_mdlRefSfcnS,  (int)(ssGetOffsetTime(_ssGetRootSS((rtm)->_mdlRefSfcnS), el50fl4kem[sti+2]))))
#endif
#ifndef rtmSetVarNextHitTime
#define rtmSetVarNextHitTime(rtm, sti, val) ssSetTimeOfNextVarHit((rtm)->_mdlRefSfcnS,  el50fl4kem[sti], val)
#endif
typedef struct { cmwtushrfh rtm ; } noywn55fqul ; extern int_T el50fl4kem [ 3
] ; extern nqwmswlblnu ox3ka0t3u2 ; extern noywn55fqul noywn55fqu ; extern
osmg53lo42o cumyr1omp00 ; extern lvqzg0r2xcl mhghcysq2pf ;
#endif
