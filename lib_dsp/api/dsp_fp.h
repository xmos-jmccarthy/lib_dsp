// Copyright (c) 2015-2019, XMOS Ltd, All rights reserved

#ifndef DSP_FP_H_
#define DSP_FP_H_

#ifdef __XC__
#define UNSAFE unsafe
#else
#define UNSAFE
#endif //__XC_


//#include <dsp_adaptive.h>
//#include <dsp_design.h>
#include <dsp_filters_fp.h>
//#include <dsp_matrix.h>
//#include <dsp_statistics.h>
//#include <dsp_math.h>
//#include <dsp_math_int.h>
//#include <dsp_qformat.h>
//#include <dsp_vector.h>
//#include <dsp_fft.h>
//#include <dsp_bfp.h>
//#include <dsp_dct.h>


double dsp_poly_eval_fp(const double x, const double * UNSAFE coefs, const unsigned n_coefs);


/*
 * Double precision DTF
 */
void dsp_float_fft_make_sine_table(double * sine_lut, unsigned proc_frame_length);
void dsp_float_fft_bit_reverse    ( dsp_complex_float_t pts[], const uint32_t N );
void dsp_float_fft_forward_fft    ( dsp_complex_float_t pts[], const uint32_t N, const double sine[]);
void dsp_float_fft_inverse_fft    ( dsp_complex_float_t pts[], const uint32_t N, const double sine[]);
void dsp_float_fft_split_spectrum ( dsp_complex_float_t pts[], const uint32_t N );
void dsp_float_fft_merge_spectra  ( dsp_complex_float_t pts[], const uint32_t N );

#endif

