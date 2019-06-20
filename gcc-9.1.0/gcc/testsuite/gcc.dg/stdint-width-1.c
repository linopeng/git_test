/* Test TS 18661-1 width macros in <stdint.h>.  */
/* { dg-do compile } */
/* { dg-options "-std=c11 -ffreestanding" } */
/* { dg-additional-options "-DSIGNAL_SUPPRESS" { target { ! signal } } } */

#include <stddef.h>
#define __STDC_WANT_IEC_60559_BFP_EXT__
#include <stdint.h>
#ifndef SIGNAL_SUPPRESS
#include <signal.h>
#endif
typedef __WINT_TYPE__ wint_t;

#define CHECK_WIDTH(TYPE, MAX, WIDTH)					\
  _Static_assert ((MAX >> ((TYPE) -1 < 0 ? (WIDTH - 2) : (WIDTH - 1))) == 1, \
		  "width must match type")

#ifdef INT8_MAX
# ifndef INT8_WIDTH
#  error "missing INT8_WIDTH"
# endif
CHECK_WIDTH (int8_t, INT8_MAX, INT8_WIDTH);
#endif
#ifdef INT16_MAX
# ifndef INT16_WIDTH
#  error "missing INT16_WIDTH"
# endif
CHECK_WIDTH (int16_t, INT16_MAX, INT16_WIDTH);
#endif
#ifdef INT32_MAX
# ifndef INT32_WIDTH
#  error "missing INT32_WIDTH"
# endif
CHECK_WIDTH (int32_t, INT32_MAX, INT32_WIDTH);
#endif
#ifdef INT64_MAX
# ifndef INT64_WIDTH
#  error "missing INT64_WIDTH"
# endif
CHECK_WIDTH (int64_t, INT64_MAX, INT64_WIDTH);
#endif
#ifdef UINT8_MAX
# ifndef UINT8_WIDTH
#  error "missing UINT8_WIDTH"
# endif
CHECK_WIDTH (uint8_t, UINT8_MAX, UINT8_WIDTH);
#endif
#ifdef UINT16_MAX
# ifndef UINT16_WIDTH
#  error "missing UINT16_WIDTH"
# endif
CHECK_WIDTH (uint16_t, UINT16_MAX, UINT16_WIDTH);
#endif
#ifdef UINT32_MAX
# ifndef UINT32_WIDTH
#  error "missing UINT32_WIDTH"
# endif
CHECK_WIDTH (uint32_t, UINT32_MAX, UINT32_WIDTH);
#endif
#ifdef UINT64_MAX
# ifndef UINT64_WIDTH
#  error "missing UINT64_WIDTH"
# endif
CHECK_WIDTH (uint64_t, UINT64_MAX, UINT64_WIDTH);
#endif

#ifndef INT_LEAST8_WIDTH
# error "missing INT_LEAST8_WIDTH"
#endif
CHECK_WIDTH (int_least8_t, INT_LEAST8_MAX, INT_LEAST8_WIDTH);
#ifndef INT_LEAST16_WIDTH
# error "missing INT_LEAST16_WIDTH"
#endif
CHECK_WIDTH (int_least16_t, INT_LEAST16_MAX, INT_LEAST16_WIDTH);
#ifndef INT_LEAST32_WIDTH
# error "missing INT_LEAST32_WIDTH"
#endif
CHECK_WIDTH (int_least32_t, INT_LEAST32_MAX, INT_LEAST32_WIDTH);
#ifndef INT_LEAST64_WIDTH
# error "missing INT_LEAST64_WIDTH"
#endif
CHECK_WIDTH (int_least64_t, INT_LEAST64_MAX, INT_LEAST64_WIDTH);
#ifndef INT_LEAST8_WIDTH
# error "missing INT_LEAST8_WIDTH"
#endif
CHECK_WIDTH (uint_least8_t, UINT_LEAST8_MAX, UINT_LEAST8_WIDTH);
#ifndef UINT_LEAST16_WIDTH
# error "missing UINT_LEAST16_WIDTH"
#endif
CHECK_WIDTH (uint_least16_t, UINT_LEAST16_MAX, UINT_LEAST16_WIDTH);
#ifndef UINT_LEAST32_WIDTH
# error "missing UINT_LEAST32_WIDTH"
#endif
CHECK_WIDTH (uint_least32_t, UINT_LEAST32_MAX, UINT_LEAST32_WIDTH);
#ifndef UINT_LEAST64_WIDTH
# error "missing UINT_LEAST64_WIDTH"
#endif
CHECK_WIDTH (uint_least64_t, UINT_LEAST64_MAX, UINT_LEAST64_WIDTH);

#ifndef INT_FAST8_WIDTH
# error "missing INT_FAST8_WIDTH"
#endif
CHECK_WIDTH (int_fast8_t, INT_FAST8_MAX, INT_FAST8_WIDTH);
#ifndef INT_FAST16_WIDTH
# error "missing INT_FAST16_WIDTH"
#endif
CHECK_WIDTH (int_fast16_t, INT_FAST16_MAX, INT_FAST16_WIDTH);
#ifndef INT_FAST32_WIDTH
# error "missing INT_FAST32_WIDTH"
#endif
CHECK_WIDTH (int_fast32_t, INT_FAST32_MAX, INT_FAST32_WIDTH);
#ifndef INT_FAST64_WIDTH
# error "missing INT_FAST64_WIDTH"
#endif
CHECK_WIDTH (int_fast64_t, INT_FAST64_MAX, INT_FAST64_WIDTH);
#ifndef INT_FAST8_WIDTH
# error "missing INT_FAST8_WIDTH"
#endif
CHECK_WIDTH (uint_fast8_t, UINT_FAST8_MAX, UINT_FAST8_WIDTH);
#ifndef UINT_FAST16_WIDTH
# error "missing UINT_FAST16_WIDTH"
#endif
CHECK_WIDTH (uint_fast16_t, UINT_FAST16_MAX, UINT_FAST16_WIDTH);
#ifndef UINT_FAST32_WIDTH
# error "missing UINT_FAST32_WIDTH"
#endif
CHECK_WIDTH (uint_fast32_t, UINT_FAST32_MAX, UINT_FAST32_WIDTH);
#ifndef UINT_FAST64_WIDTH
# error "missing UINT_FAST64_WIDTH"
#endif
CHECK_WIDTH (uint_fast64_t, UINT_FAST64_MAX, UINT_FAST64_WIDTH);

#ifdef INTPTR_MAX
# ifndef INTPTR_WIDTH
#  error "missing INTPTR_WIDTH"
# endif
CHECK_WIDTH (intptr_t, INTPTR_MAX, INTPTR_WIDTH);
#endif
#ifdef UINTPTR_MAX
# ifndef UINTPTR_WIDTH
#  error "missing UINTPTR_WIDTH"
# endif
CHECK_WIDTH (uintptr_t, UINTPTR_MAX, UINTPTR_WIDTH);
#endif

#ifndef INTMAX_WIDTH
# error "missing INTMAX_WIDTH"
#endif
CHECK_WIDTH (intmax_t, INTMAX_MAX, INTMAX_WIDTH);
#ifndef UINTMAX_WIDTH
# error "missing UINTMAX_WIDTH"
#endif
CHECK_WIDTH (uintmax_t, UINTMAX_MAX, UINTMAX_WIDTH);

#ifndef PTRDIFF_WIDTH
# error "missing PTRDIFF_WIDTH"
#endif
CHECK_WIDTH (ptrdiff_t, PTRDIFF_MAX, PTRDIFF_WIDTH);
#ifndef SIGNAL_SUPPRESS
# ifndef SIG_ATOMIC_WIDTH
#  error "missing SIG_ATOMIC_WIDTH"
# endif
CHECK_WIDTH (sig_atomic_t, SIG_ATOMIC_MAX, SIG_ATOMIC_WIDTH);
#endif
#ifndef SIZE_WIDTH
# error "missing SIZE_WIDTH"
#endif
CHECK_WIDTH (size_t, SIZE_MAX, SIZE_WIDTH);
#ifndef WCHAR_WIDTH
# error "missing WCHAR_WIDTH"
#endif
CHECK_WIDTH (wchar_t, WCHAR_MAX, WCHAR_WIDTH);
#ifndef WINT_WIDTH
# error "missing WINT_WIDTH"
#endif
CHECK_WIDTH (wint_t, WINT_MAX, WINT_WIDTH);
