/*********************************************************************
  Blosc - Blocked Shuffling and Compression Library

  Author: Francesc Alted <francesc@blosc.org>

  See LICENSES/BLOSC.txt for details about copyright and rights to use.
**********************************************************************/

/* AVX2-accelerated shuffle/unshuffle routines. */

#ifndef SHUFFLE_AVX2_H
#define SHUFFLE_AVX2_H

#include "shuffle-common.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
  AVX2-accelerated shuffle routine.
*/
BLOSC_DLL_EXPORT void shuffle_avx2(const size_t bytesoftype, const size_t blocksize,
                                   const uint8_t* const _src, uint8_t* const _dest);

/**
  AVX2-accelerated unshuffle routine.
*/
BLOSC_DLL_EXPORT void unshuffle_avx2(const size_t bytesoftype, const size_t blocksize,
                                     const uint8_t* const _src, uint8_t* const _dest);

#ifdef __cplusplus
}
#endif

#endif /* SHUFFLE_AVX2_H */
