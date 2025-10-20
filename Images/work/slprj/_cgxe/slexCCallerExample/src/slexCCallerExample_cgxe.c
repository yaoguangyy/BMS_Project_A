/* Include files */

#include "slexCCallerExample_cgxe.h"
#include "m_kPPloBz4QbizmsFSPaFr4C.h"

unsigned int cgxe_slexCCallerExample_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 1710154042 &&
      ssGetChecksum1(S) == 1487795630 &&
      ssGetChecksum2(S) == 2213294975 &&
      ssGetChecksum3(S) == 3709485905) {
    method_dispatcher_kPPloBz4QbizmsFSPaFr4C(S, method, data);
    return 1;
  }

  return 0;
}
