
#ifndef __FCT_H__
#define __FCT_H__

#include <stdint.h>

void plp_mat_mult_i32s_xpulpv2(
                              const int32_t * __restrict__ pSrcA,
                              const int32_t * __restrict__ pSrcB,
                              uint32_t M,
                              uint32_t N,
                              uint32_t O,
                              int32_t * __restrict__ pDstC);

#endif