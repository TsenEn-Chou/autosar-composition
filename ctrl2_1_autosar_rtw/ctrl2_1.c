/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ctrl2_1.c
 *
 * Code generated for Simulink model 'ctrl2_1'.
 *
 * Model version                  : 1.44
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Mon Jul 18 15:49:06 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ctrl2_1.h"
#include "ctrl2_1_private.h"
#include "rtwtypes.h"
#include <math.h>

uint8 look2_ifbu8lftu8Dfdf_linlcpw(float32 u0, float32 u1, const uint8 bp0[],
  const uint8 bp1[], const uint8 table[], const uint32 maxIndex[], uint32 stride)
{
  float32 fractions[2];
  float32 frac;
  float32 tmp;
  uint32 bpIndices[2];
  uint32 bpIdx;
  uint8 uCast;
  uint8 yL_0d1;

  /* Column-major Lookup 2-D
     Search method: 'linear'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 < 256.0F) {
    if (u0 >= 0.0F) {
      uCast = (uint8)u0;
    } else {
      uCast = 0U;
    }
  } else {
    uCast = MAX_uint8_T;
  }

  if (u0 < bp0[0U]) {
    bpIdx = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Linear Search */
    for (bpIdx = maxIndex[0U] >> 1U; uCast < bp0[bpIdx]; bpIdx--) {
    }

    while (uCast >= bp0[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u0 - (float32)bp0[bpIdx]) / (float32)(uint8)((uint32)bp0[bpIdx + 1U]
      - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex[0U] - 1U;
    frac = 1.0F;
  }

  fractions[0U] = frac;
  bpIndices[0U] = bpIdx;

  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 < 256.0F) {
    if (u1 >= 0.0F) {
      uCast = (uint8)u1;
    } else {
      uCast = 0U;
    }
  } else {
    uCast = MAX_uint8_T;
  }

  if (u1 < bp1[0U]) {
    bpIdx = 0U;
    frac = 0.0F;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Linear Search */
    for (bpIdx = maxIndex[1U] >> 1U; uCast < bp1[bpIdx]; bpIdx--) {
    }

    while (uCast >= bp1[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u1 - (float32)bp1[bpIdx]) / (float32)(uint8)((uint32)bp1[bpIdx + 1U]
      - bp1[bpIdx]);
  } else {
    bpIdx = maxIndex[1U] - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  bpIdx = bpIdx * stride + bpIndices[0U];
  uCast = table[bpIdx];
  tmp = fmodf(truncf(((float32)table[bpIdx + 1U] - (float32)uCast) * fractions
                     [0U]), 256.0F);
  uCast = (uint8)((uint32)(uint8)(tmp < 0.0F ? (sint32)(uint8)-(sint8)(uint8)-
    tmp : (sint32)(uint8)tmp) + uCast);
  bpIdx += stride;
  yL_0d1 = table[bpIdx];
  tmp = fmodf(truncf(((float32)table[bpIdx + 1U] - (float32)yL_0d1) * fractions
                     [0U]), 256.0F);
  tmp = fmodf(truncf(((float32)(uint8)((uint32)(uint8)(tmp < 0.0F ? (sint32)
    (uint8)-(sint8)(uint8)-tmp : (sint32)(uint8)tmp) + yL_0d1) - (float32)uCast)
                     * frac), 256.0F);
  return (uint8)((uint32)(uint8)(tmp < 0.0F ? (sint32)(uint8)-(sint8)(uint8)-tmp
    : (sint32)(uint8)tmp) + uCast);
}

/* Model step function */
void ctrl2_1_Step(void)
{
  /* Outport generated from: '<Root>/Bus Element Out1' incorporates:
   *  Inport generated from: '<Root>/Bus Element In1'
   *  Inport generated from: '<Root>/Bus Element In2'
   *  Lookup_n-D: '<Root>/2-D Lookup Table'
   */
  Rte_IWrite_ctrl2_1_Step_OutBus_Value(look2_ifbu8lftu8Dfdf_linlcpw
    (Rte_IRead_ctrl2_1_Step_InBus1_Value(), Rte_IRead_ctrl2_1_Step_InBus2_Value(),
     ctrl2_1_ConstP.uDLookupTable_bp01Data,
     ctrl2_1_ConstP.uDLookupTable_bp02Data,
     ctrl2_1_ConstP.uDLookupTable_tableData,
     ctrl2_1_ConstP.uDLookupTable_maxIndex, 3U));
}

/* Model initialize function */
void ctrl2_1_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
