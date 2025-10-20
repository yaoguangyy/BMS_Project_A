#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_enabled;

#define __MW_INSTRUM_HITS_TABLE_VAR_NAME __mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_phits

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)((++__mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_phits[id - 1u]) || ((__mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_phits[id - 1u] = (~0u))!=0)))
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_enabled && __mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_27() \
  __MW_INSTRUM_RECORD_HIT(39U + __mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_curr_combination_idx_27)

#define __MW_INSTRUM_NODE_29(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(29U), (__mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_curr_combination_idx_27 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(30U), (__mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_curr_combination_idx_27 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_34(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(34U), (__mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_curr_combination_idx_27 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(35U), (0 == 1)))
#define __MW_INSTRUM_NODE_27(expr) \
  ((expr) ?\
   (__MW_INSTRUM_RECORD_HIT(27U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(28U), __MW_INSTRUM_RECORD_COMBINATION_HIT_27(), (0 == 1)))


#define __MW_INSTRUM_FCN_ENTER_1() 
#define __MW_INSTRUM_FCN_ENTER_2() 
#define __MW_INSTRUM_FCN_ENTER_3() 
#define __MW_INSTRUM_FCN_ENTER_4() 
#define __MW_INSTRUM_FCN_ENTER_5() \
  unsigned int __mw_instrum_RcgoP9O0aXVjiyC1fK8hWG_cclib_curr_combination_idx_27 = 0U; 

#define __MW_INSTRUM_NODE_1() (__MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() (__MW_INSTRUM_RECORD_HIT(4U))
#define __MW_INSTRUM_NODE_5() (__MW_INSTRUM_RECORD_HIT(5U))
#define __MW_INSTRUM_NODE_6(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(6U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(7U), (0 == 1)))
#define __MW_INSTRUM_NODE_8(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(8U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(9U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(10U) : (void)0)))
#define __MW_INSTRUM_NODE_11() (__MW_INSTRUM_RECORD_HIT(11U))
#define __MW_INSTRUM_NODE_12() (__MW_INSTRUM_RECORD_HIT(12U))
#define __MW_INSTRUM_NODE_13() (__MW_INSTRUM_RECORD_HIT(13U))
#define __MW_INSTRUM_NODE_14() (__MW_INSTRUM_RECORD_HIT(14U))
#define __MW_INSTRUM_NODE_15() (__MW_INSTRUM_RECORD_HIT(15U))
#define __MW_INSTRUM_NODE_16() (__MW_INSTRUM_RECORD_HIT(16U))
#define __MW_INSTRUM_NODE_17() (__MW_INSTRUM_RECORD_HIT(17U))
#define __MW_INSTRUM_NODE_18() (__MW_INSTRUM_RECORD_HIT(18U))
#define __MW_INSTRUM_NODE_19() (__MW_INSTRUM_RECORD_HIT(19U))
#define __MW_INSTRUM_NODE_20() (__MW_INSTRUM_RECORD_HIT(20U))
#define __MW_INSTRUM_NODE_21() (__MW_INSTRUM_RECORD_HIT(21U))
#define __MW_INSTRUM_NODE_22(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(22U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(23U), (0 == 1)))
#define __MW_INSTRUM_NODE_24(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(24U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(25U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(26U) : (void)0)))
#define __MW_INSTRUM_NODE_31(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(31U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(32U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(33U) : (void)0)))
#define __MW_INSTRUM_NODE_28() (__MW_INSTRUM_RECORD_HIT(28U))
#define __MW_INSTRUM_NODE_36(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(36U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(37U), (0 == 1)))
#define __MW_INSTRUM_NODE_37() (__MW_INSTRUM_RECORD_HIT(37U))
#define __MW_INSTRUM_NODE_38() (__MW_INSTRUM_RECORD_HIT(38U))
#ifdef __cplusplus
template<typename T>
static T *__mw_instrum_address_of(T& arg)
{
  return reinterpret_cast<T*>(
               &const_cast<char&>(
                   reinterpret_cast<const volatile char&>(arg)));
}
#else
#define __mw_instrum_address_of(X) &(X)
#endif

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#define __mw_instrum_address_of(x) &(x)

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_29CZ_RcgoP9O0aXVjiyC1fK8hWG(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) (__MW_INSTRUM_RECORD_HIT_29CZ_RcgoP9O0aXVjiyC1fK8hWG(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_29(exp) (__MW_INSTRUM_RECORD_HIT_29CZ_RcgoP9O0aXVjiyC1fK8hWG(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_34CZ_RcgoP9O0aXVjiyC1fK8hWG(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_34(...) (__MW_INSTRUM_RECORD_HIT_34CZ_RcgoP9O0aXVjiyC1fK8hWG(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_34(exp) (__MW_INSTRUM_RECORD_HIT_34CZ_RcgoP9O0aXVjiyC1fK8hWG(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_27DA_29_34Z_RcgoP9O0aXVjiyC1fK8hWG(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) (__MW_INSTRUM_RECORD_HIT_27DA_29_34Z_RcgoP9O0aXVjiyC1fK8hWG(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_27(exp) (__MW_INSTRUM_RECORD_HIT_27DA_29_34Z_RcgoP9O0aXVjiyC1fK8hWG(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_FCN_ENTER_5() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_2XZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_2() __MW_INSTRUM_RECORD_HIT_2XZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_3EZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_3() __MW_INSTRUM_RECORD_HIT_3EZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4XZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4XZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_5EZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_5() __MW_INSTRUM_RECORD_HIT_5EZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_6DZ_RcgoP9O0aXVjiyC1fK8hWG(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_6(...) (__MW_INSTRUM_RECORD_HIT_6DZ_RcgoP9O0aXVjiyC1fK8hWG(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_6(exp) (__MW_INSTRUM_RECORD_HIT_6DZ_RcgoP9O0aXVjiyC1fK8hWG(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_8ILTZ_RcgoP9O0aXVjiyC1fK8hWG(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_8(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_8ILTZ_RcgoP9O0aXVjiyC1fK8hWG((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_11XZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_11() __MW_INSTRUM_RECORD_HIT_11XZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_12EZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_12() __MW_INSTRUM_RECORD_HIT_12EZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_13DZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_13() __MW_INSTRUM_RECORD_HIT_13DZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_14XZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_14() __MW_INSTRUM_RECORD_HIT_14XZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_15DZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_15() __MW_INSTRUM_RECORD_HIT_15DZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_16XZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_16() __MW_INSTRUM_RECORD_HIT_16XZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_17DZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_17() __MW_INSTRUM_RECORD_HIT_17DZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_18XZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_18() __MW_INSTRUM_RECORD_HIT_18XZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_19DZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_19() __MW_INSTRUM_RECORD_HIT_19DZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_20XZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_20() __MW_INSTRUM_RECORD_HIT_20XZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_21EZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_21() __MW_INSTRUM_RECORD_HIT_21EZ_RcgoP9O0aXVjiyC1fK8hWG()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_22CZ_RcgoP9O0aXVjiyC1fK8hWG(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) (__MW_INSTRUM_RECORD_HIT_22CZ_RcgoP9O0aXVjiyC1fK8hWG(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_22(exp) (__MW_INSTRUM_RECORD_HIT_22CZ_RcgoP9O0aXVjiyC1fK8hWG(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_24IGEZ_RcgoP9O0aXVjiyC1fK8hWG(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_24(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_24IGEZ_RcgoP9O0aXVjiyC1fK8hWG((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_31IGEZ_RcgoP9O0aXVjiyC1fK8hWG(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_31(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_31IGEZ_RcgoP9O0aXVjiyC1fK8hWG((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_28() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_36DZ_RcgoP9O0aXVjiyC1fK8hWG(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_36(...) (__MW_INSTRUM_RECORD_HIT_36DZ_RcgoP9O0aXVjiyC1fK8hWG(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_36(exp) (__MW_INSTRUM_RECORD_HIT_36DZ_RcgoP9O0aXVjiyC1fK8hWG(exp))
#endif

#define __MW_INSTRUM_NODE_37() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_38XZ_RcgoP9O0aXVjiyC1fK8hWG(void) { }
#define __MW_INSTRUM_NODE_38() __MW_INSTRUM_RECORD_HIT_38XZ_RcgoP9O0aXVjiyC1fK8hWG()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "C:\\Users\\18811\\Documents\\MATLAB\\Examples\\R2024b\\simulink_features\\CallCFunctionsUsingCCallerBlockExample\\my_func.c"
# 2 "C:\\Users\\18811\\Documents\\MATLAB\\Examples\\R2024b\\simulink_features\\CallCFunctionsUsingCCallerBlockExample\\my_func.h"
#ifndef _MY_FUNC_H_
#define _MY_FUNC_H_
# 12
typedef 
# 7
enum { 
RED, 
YELLOW, 
GREEN, 
UNKNOWN
} TrafficLightColor; 



typedef 
# 14
struct { 
int input; 
} SIGNALBUS; 




typedef 
# 18
struct { 
int upper_saturation_limit; 
int lower_saturation_limit; 
} LIMITBUS; 




typedef 
# 23
struct { 
SIGNALBUS inputsignal; 
LIMITBUS limits; 
} COUNTERBUS; 


extern double add(double u1, double u2); 
extern double timesK(double u, double K); 
extern void incrementElement(int * u, unsigned size, unsigned increment_idx); 
extern TrafficLightColor getNextTrafficLight(TrafficLightColor current); 
extern void counterbusFcn(const COUNTERBUS * u1, int u2, COUNTERBUS * y1, int * y2); 

#endif /* _MY_FUNC_H_ */
# 12 "D:\\matlab 2024b test\\extern\\include\\tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
# 7 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
#ifndef _INC_CRTDEFS
#define _INC_CRTDEFS
# 7 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef _INC__MINGW_H
#define _INC__MINGW_H
# 7 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw_mac.h" 3
#ifndef _INC_CRTDEFS_MACRO
#define _INC_CRTDEFS_MACRO
# 167
#ifndef __C89_NAMELESS
#define __C89_NAMELESS __MINGW_EXTENSION
# 184
#endif /* __C89_NAMELESS */

#ifndef __GNU_EXTENSION
#define __GNU_EXTENSION __MINGW_EXTENSION
#endif /* __GNU_EXTENSION */
# 294
#endif /* _INC_CRTDEFS_MACRO */
# 7 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw_secapi.h" 3
#ifndef _INC_MINGW_SECAPI
#define _INC_MINGW_SECAPI
# 73
#endif /* _INC_MINGW_SECAPI */
# 33 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifdef __stdcall
#undef __stdcall
#endif /* __stdcall */
# 50
#ifndef __MINGW_IMPORT
#define __MINGW_IMPORT extern __attribute__ ((__dllimport__))


#endif /* __MINGW_IMPORT */
# 225
#ifndef __MSVCRT_VERSION__
#define __MSVCRT_VERSION__ 0x700

#endif /* __MSVCRT_VERSION__ */


#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x502
#endif /* _WIN32_WINNT */

#ifndef _INT128_DEFINED
#define _INT128_DEFINED
# 252
#endif /* _INT128_DEFINED */




#ifndef __unaligned
#define __unaligned
#endif /* __unaligned */
#ifndef __w64
#define __w64
#endif /* __w64 */
# 6 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#ifndef _INC_VADEFS
#define _INC_VADEFS
# 569 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef MINGW_SDK_INIT
#define MINGW_SDK_INIT
# 5 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\sdks\\_mingw_directx.h" 3
#ifndef MINGW_HAS_DDRAW_H
#define MINGW_HAS_DDRAW_H 1

#endif /* MINGW_HAS_DDRAW_H */
# 1 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\sdks\\_mingw_ddk.h" 3
#ifndef MINGW_DDK_H
#define MINGW_DDK_H



#endif /* MINGW_DDK_H */
# 582 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#endif /* MINGW_SDK_INIT */
# 14 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\vadefs.h" 3
#pragma pack ( push, 8 )
# 22
#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
typedef __builtin_va_list __gnuc_va_list; 
#endif /* __GNUC_VA_LIST */


#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED

typedef __gnuc_va_list va_list; 





#endif /* _VA_LIST_DEFINED */
# 103
#pragma pack ( pop )


#endif /* _INC_VADEFS */
# 294 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\_mingw.h" 3
#ifndef _W64
#define _W64
#endif /* _W64 */
# 306
#ifndef _CRTIMP2
#define _CRTIMP2 _CRTIMP
#endif /* _CRTIMP2 */

#ifndef _CRTIMP_ALTERNATIVE
#define _CRTIMP_ALTERNATIVE _CRTIMP

#endif /* _CRTIMP_ALTERNATIVE */

#ifndef _MRTIMP2
#define _MRTIMP2 _CRTIMP
#endif /* _MRTIMP2 */
# 328
#ifndef _MT
#define _MT
#endif /* _MT */

#ifndef _MCRTIMP
#define _MCRTIMP _CRTIMP
#endif /* _MCRTIMP */

#ifndef _CRTIMP_PURE
#define _CRTIMP_PURE _CRTIMP
#endif /* _CRTIMP_PURE */

#ifndef _PGLOBAL
#define _PGLOBAL
#endif /* _PGLOBAL */

#ifndef _AGLOBAL
#define _AGLOBAL
#endif /* _AGLOBAL */




#ifndef _CRT_INSECURE_DEPRECATE_MEMORY
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) 
#endif /* _CRT_INSECURE_DEPRECATE_MEMORY */

#ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) 
#endif /* _CRT_INSECURE_DEPRECATE_GLOBALS */

#ifndef _CRT_MANAGED_HEAP_DEPRECATE
#define _CRT_MANAGED_HEAP_DEPRECATE
#endif /* _CRT_MANAGED_HEAP_DEPRECATE */

#ifndef _CRT_OBSOLETE
#define _CRT_OBSOLETE(_NewItem) 
#endif /* _CRT_OBSOLETE */
# 375
#ifndef _CONST_RETURN
#define _CONST_RETURN
#endif /* _CONST_RETURN */
# 397
#ifndef __CRTDECL
#define __CRTDECL __cdecl
#endif /* __CRTDECL */



#ifndef _TRUNCATE
#define _TRUNCATE ((size_t)-1)
#endif /* _TRUNCATE */

#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
# 460
#ifndef __ANONYMOUS_DEFINED
#define __ANONYMOUS_DEFINED
# 471
#endif /* __ANONYMOUS_DEFINED */
# 552
__attribute((__cdecl__)) __attribute((gnu_inline)) extern __inline__ void __debugbreak(void); 
__attribute((__always_inline__, __gnu_inline__)) __attribute((__cdecl__)) extern __inline__ void __debugbreak(void) 
{ 
__asm__ volatile("int {$}3" : :); 
} 




const char *__mingw_get_crt_info(void); 





#endif /* _INC__MINGW_H */
# 15 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\crtdefs.h" 3
#pragma pack ( push, 8 )
# 23
#ifndef _CRTNOALIAS
#define _CRTNOALIAS
#endif /* _CRTNOALIAS */

#ifndef _CRTRESTRICT
#define _CRTRESTRICT
#endif /* _CRTRESTRICT */

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED


__extension__ typedef unsigned long long size_t; 



#endif /* _SIZE_T_DEFINED */

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED


__extension__ typedef long long ssize_t; 



#endif /* _SSIZE_T_DEFINED */

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
# 52
typedef size_t rsize_t; 

#endif /* _RSIZE_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#ifndef __intptr_t_defined
#define __intptr_t_defined


__extension__ typedef long long intptr_t; 



#endif /* __intptr_t_defined */
#endif /* _INTPTR_T_DEFINED */

#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#ifndef __uintptr_t_defined
#define __uintptr_t_defined


__extension__ typedef unsigned long long uintptr_t; 



#endif /* __uintptr_t_defined */
#endif /* _UINTPTR_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#ifndef _PTRDIFF_T_
#define _PTRDIFF_T_


__extension__ typedef long long ptrdiff_t; 



#endif /* _PTRDIFF_T_ */
#endif /* _PTRDIFF_T_DEFINED */
# 102
#ifndef _WCTYPE_T_DEFINED
#define _WCTYPE_T_DEFINED
#ifndef _WINT_T
#define _WINT_T
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
#endif /* _WINT_T */
#endif /* _WCTYPE_T_DEFINED */

#ifndef _ERRCODE_DEFINED
#define _ERRCODE_DEFINED
typedef int errno_t; 
#endif /* _ERRCODE_DEFINED */

#ifndef _TIME32_T_DEFINED
#define _TIME32_T_DEFINED
typedef long __time32_t; 
#endif /* _TIME32_T_DEFINED */

#ifndef _TIME64_T_DEFINED
#define _TIME64_T_DEFINED
__extension__ typedef long long __time64_t; 
#endif /* _TIME64_T_DEFINED */
# 133
#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED



typedef __time64_t time_t; 

#endif /* _TIME_T_DEFINED */

#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif /* _CRT_SECURE_CPP_NOTHROW */
# 422
struct threadlocaleinfostruct; 
struct threadmbcinfostruct; 
typedef struct threadlocaleinfostruct *pthreadlocinfo; 
typedef struct threadmbcinfostruct *pthreadmbcinfo; 
struct __lc_time_data; 




typedef 
# 428
struct localeinfo_struct { 
pthreadlocinfo locinfo; 
pthreadmbcinfo mbcinfo; 
} _locale_tstruct, *_locale_t; 

#ifndef _TAGLC_ID_DEFINED
#define _TAGLC_ID_DEFINED




typedef 
# 435
struct tagLC_ID { 
unsigned short wLanguage; 
unsigned short wCountry; 
unsigned short wCodePage; 
} LC_ID, *LPLC_ID; 
#endif /* _TAGLC_ID_DEFINED */

#ifndef _THREADLOCALEINFO
#define _THREADLOCALEINFO
# 468
typedef 
# 444
struct threadlocaleinfostruct { 
int refcount; 
unsigned lc_codepage; 
unsigned lc_collate_cp; 
unsigned long lc_handle[6]; 
LC_ID lc_id[6]; 
struct { 
char *locale; 
unsigned short *wlocale; 
int *refcount; 
int *wrefcount; 
} lc_category[6]; 
int lc_clike; 
int mb_cur_max; 
int *lconv_intl_refcount; 
int *lconv_num_refcount; 
int *lconv_mon_refcount; 
struct lconv *lconv; 
int *ctype1_refcount; 
unsigned short *ctype1; 
const unsigned short *pctype; 
const unsigned char *pclmap; 
const unsigned char *pcumap; 
struct __lc_time_data *lc_time_curr; 
} threadlocinfo; 
#endif /* _THREADLOCALEINFO */

#ifndef __crt_typefix
#define __crt_typefix(ctype) 
#endif /* __crt_typefix */


#pragma pack ( pop )


#endif /* _INC_CRTDEFS */
# 8 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\limits.h" 3
#ifndef _INC_LIMITS
#define _INC_LIMITS
# 119
#endif /* _INC_LIMITS */
# 59 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\lib\\gcc\\x86_64-w64-mingw32\\8.1.0\\include-fixed\\limits.h" 3
#ifndef _LIMITS_H___
#define _LIMITS_H___
# 187
#endif /* _LIMITS_H___ */
# 28 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\lib\\gcc\\x86_64-w64-mingw32\\8.1.0\\include\\stdbool.h" 3
#ifndef _STDBOOL_H
#define _STDBOOL_H
# 54
#endif /* _STDBOOL_H */
# 28 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\lib\\gcc\\x86_64-w64-mingw32\\8.1.0\\include\\float.h" 3
#ifndef _FLOAT_H___
#define _FLOAT_H___
# 506
#endif /* _FLOAT_H___ */
# 18 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\float.h" 3
#ifndef _SECIMP
#define _SECIMP __declspec(dllimport)
#endif /* _SECIMP */
# 127
#ifndef _MINGW_FLOAT_H_
#define _MINGW_FLOAT_H_
# 197
#ifndef __MINGW_FPCLASS_DEFINED
#define __MINGW_FPCLASS_DEFINED 1
# 209
#endif /* __MINGW_FPCLASS_DEFINED */
# 253
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) unsigned _controlfp(unsigned unNew, unsigned unMask); 
__attribute((dllimport)) __attribute((__cdecl__)) errno_t _controlfp_s(unsigned * _CurrentState, unsigned _NewValue, unsigned _Mask); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) unsigned _control87(unsigned unNew, unsigned unMask); 


__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) unsigned _clearfp(void); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) unsigned _statusfp(void); 
# 273
__attribute((__cdecl__)) __attribute((__nothrow__)) void _fpreset(void); 
__attribute((__cdecl__)) __attribute((__nothrow__)) void fpreset(void); 


__attribute((__dllimport__)) int *__fpecode(void) __attribute((__cdecl__)) __attribute((__nothrow__)); 
# 285
#ifndef _SIGN_DEFINED
#define _SIGN_DEFINED
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _chgsign(double _X); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _copysign(double _Number, double _Sign); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _logb(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _nextafter(double, double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) double _scalb(double, long); 

__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) int _finite(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) int _fpclass(double); 
__attribute((__dllimport__)) __attribute((__cdecl__)) __attribute((__nothrow__)) int _isnan(double); 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define _copysignl __builtin_mw__copysignl
#else
# 297
#define _copysignl copysignl
#endif
# 298
__attribute((__cdecl__)) extern long double _chgsignl(long double); 
#endif /* _SIGN_DEFINED */
# 309
#endif /* _MINGW_FLOAT_H_ */
# 89 "D:\\matlab 2024b test\\extern\\include\\tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
# 97
typedef unsigned long long ulonglong_T; 
# 222
typedef signed char int8_T; 
# 239
typedef unsigned char uint8_T; 
# 257
typedef short int16_T; 
# 275
typedef unsigned short uint16_T; 
# 293
typedef int int32_T; 
# 311
typedef unsigned uint32_T; 
# 372
typedef float real32_T; 
# 386
typedef double real64_T; 
# 447
#ifndef INT64_T
#define INT64_T long long
#endif /* INT64_T */
#ifndef UINT64_T
#define UINT64_T unsigned long long
#endif /* UINT64_T */
#ifndef FMT64
#define FMT64 "ll"
#endif /* FMT64 */
# 465
__extension__ typedef long long int64_T; 
# 479
__extension__ typedef unsigned long long uint64_T; 
# 535
typedef real64_T real_T; 
# 544
typedef real_T time_T; 
# 556
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
# 592
typedef 
# 590
struct { 
real32_T re, im; 
} creal32_T; 
# 601
typedef 
# 599
struct { 
real64_T re, im; 
} creal64_T; 
# 610
typedef 
# 608
struct { 
real_T re, im; 
} creal_T; 
# 621
typedef 
# 619
struct { 
int8_T re, im; 
} cint8_T; 
# 630
typedef 
# 628
struct { 
uint8_T re, im; 
} cuint8_T; 
# 639
typedef 
# 637
struct { 
int16_T re, im; 
} cint16_T; 
# 648
typedef 
# 646
struct { 
uint16_T re, im; 
} cuint16_T; 
# 657
typedef 
# 655
struct { 
int32_T re, im; 
} cint32_T; 
# 666
typedef 
# 664
struct { 
uint32_T re, im; 
} cuint32_T; 
# 675
typedef 
# 673
struct { 
int64_T re, im; 
} cint64_T; 
# 684
typedef 
# 682
struct { 
uint64_T re, im; 
} cuint64_T; 
# 9 "C:\\ProgramData\\MATLAB\\SupportPackages\\R2024b_1\\3P.instrset\\mingw_w64.instrset\\x86_64-w64-mingw32\\include\\stddef.h" 3
#ifndef _INC_STDDEF
#define _INC_STDDEF





#ifndef _CRT_ERRNO_DEFINED
#define _CRT_ERRNO_DEFINED
__attribute((__dllimport__)) extern int *_errno(void) __attribute((__cdecl__)); 

__attribute((__cdecl__)) errno_t _set_errno(int _Value); 
__attribute((__cdecl__)) errno_t _get_errno(int * _Value); 
#endif /* _CRT_ERRNO_DEFINED */

__attribute((__dllimport__)) __attribute((__cdecl__)) extern unsigned long __threadid(void); 

__attribute((__dllimport__)) __attribute((__cdecl__)) extern uintptr_t __threadhandle(void); 





#endif /* _INC_STDDEF */
# 418
#ifndef _GCC_MAX_ALIGN_T
#define _GCC_MAX_ALIGN_T
# 426
typedef 
# 423
struct { 
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
} max_align_t; 
#endif /* _GCC_MAX_ALIGN_T */
# 834 "D:\\matlab 2024b test\\extern\\include\\tmwtypes.h"
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 





#ifndef SLSIZE_SLINDEX
#define SLSIZE_SLINDEX

typedef int64_T SLIndex; 
typedef int64_T SLSize; 




#endif /* SLSIZE_SLINDEX */
# 883
typedef unsigned short CHAR16_T; 


#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
# 5 "C:\\Users\\18811\\Documents\\MATLAB\\Examples\\R2024b\\simulink_features\\CallCFunctionsUsingCCallerBlockExample\\my_func.c"
double add(double u1, double u2) 
{ __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); 
{ double __mw_tmp_for_return = u1 + u2; __MW_INSTRUM_NODE_2(); return __mw_tmp_for_return; } 
} 

double timesK(double u, double K) 
{ __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_3(); 
{ double __mw_tmp_for_return = u * K; __MW_INSTRUM_NODE_4(); return __mw_tmp_for_return; } 
} 

void incrementElement(int *u, unsigned size, unsigned increment_idx) 
{ __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_5(); { 
if (__MW_INSTRUM_NODE_6((__MW_INSTRUM_NODE_8(increment_idx, size), (increment_idx < size)))) { 
(u[increment_idx])++; 
}  } __MW_INSTRUM_NODE_11(); 
} 

TrafficLightColor getNextTrafficLight(TrafficLightColor current) 
{ __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_12(); { 
switch (current) { 
case RED:  __MW_INSTRUM_NODE_13(); __MW_INSTRUM_NODE_14(); 
return GREEN; 
case YELLOW:  __MW_INSTRUM_NODE_15(); __MW_INSTRUM_NODE_16(); 
return RED; 
case GREEN:  __MW_INSTRUM_NODE_17(); __MW_INSTRUM_NODE_18(); 
return YELLOW; 
default:  __MW_INSTRUM_NODE_19(); __MW_INSTRUM_NODE_20(); 
return UNKNOWN; 
}  } 
} 

void counterbusFcn(const COUNTERBUS *u1, int32_T u2, COUNTERBUS *y1, int32_T *y2) 
{ int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_21(); { 
int32_T limit; 
boolean_T inputGElower; 
limit = (u1->inputsignal).input + u2; 
inputGElower = __MW_INSTRUM_NODE_22(((__mw_tmp_for_expr_1 = (u1->limits).lower_saturation_limit), (__MW_INSTRUM_NODE_24(limit, __mw_tmp_for_expr_1), (limit >= __mw_tmp_for_expr_1)))); { 
if (__MW_INSTRUM_NODE_27(__MW_INSTRUM_NODE_29(((__mw_tmp_for_expr_2 = (u1->limits).upper_saturation_limit), (__MW_INSTRUM_NODE_31(__mw_tmp_for_expr_2, limit), (__mw_tmp_for_expr_2 >= limit)))) && (__MW_INSTRUM_NODE_34(inputGElower)))) { 
*y2 = limit; 
} else { { 
if (__MW_INSTRUM_NODE_36(inputGElower)) { 
limit = (u1->limits).upper_saturation_limit; 
} else { 
limit = (u1->limits).lower_saturation_limit; 
}  } 
*y2 = limit; 
}  } 
(y1->inputsignal).input = *y2; 
y1->limits = u1->limits; } __MW_INSTRUM_NODE_38(); 
} 
