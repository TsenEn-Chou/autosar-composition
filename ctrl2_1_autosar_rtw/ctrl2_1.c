/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ctrl2_1.c
 *
 * Code generated for Simulink model 'ctrl2_1'.
 *
 * Model version                  : 2.18
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Nov 25 16:34:03 2022
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

uint8 look2_ifbdtdIu8dd_linlcpw(float32 u0, float32 u1, const float64 bp0[],
  const float64 bp1[], const float64 table[], const uint32 maxIndex[], uint32
  stride)
{
  float64 fractions[2];
  float64 frac;
  float64 tmp;
  float64 yL_0d0;
  uint32 bpIndices[2];
  uint32 bpIdx;
  uint8 yL_1d;

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
  if (u0 < bp0[0U]) {
    bpIdx = 0U;
    frac = 0.0;
  } else if (u0 < (float32)bp0[maxIndex[0U]]) {
    /* Linear Search */
    for (bpIdx = maxIndex[0U] >> 1U; u0 < bp0[bpIdx]; bpIdx--) {
    }

    while (u0 >= bp0[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[bpIdx + 1U] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex[0U] - 1U;
    frac = 1.0;
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
  if (u1 < bp1[0U]) {
    bpIdx = 0U;
    frac = 0.0;
  } else if (u1 < (float32)bp1[maxIndex[1U]]) {
    /* Linear Search */
    for (bpIdx = maxIndex[1U] >> 1U; u1 < bp1[bpIdx]; bpIdx--) {
    }

    while (u1 >= bp1[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u1 - bp1[bpIdx]) / (bp1[bpIdx + 1U] - bp1[bpIdx]);
  } else {
    bpIdx = maxIndex[1U] - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  bpIdx = bpIdx * stride + bpIndices[0U];
  yL_0d0 = table[bpIdx];
  tmp = fmod(trunc(yL_0d0), 256.0);
  yL_0d0 = fmod(trunc((table[bpIdx + 1U] - yL_0d0) * fractions[0U]), 256.0);
  yL_1d = (uint8)((uint32)(uint8)(tmp < 0.0 ? (sint32)(uint8)-(sint8)(uint8)-tmp
    : (sint32)(uint8)tmp) + (uint8)(yL_0d0 < 0.0 ? (sint32)(uint8)-(sint8)(uint8)
    -yL_0d0 : (sint32)(uint8)yL_0d0));
  bpIdx += stride;
  yL_0d0 = table[bpIdx];
  tmp = fmod(trunc(yL_0d0), 256.0);
  yL_0d0 = fmod(trunc((table[bpIdx + 1U] - yL_0d0) * fractions[0U]), 256.0);
  tmp = fmod(trunc(((float64)(uint8)((uint32)(uint8)(tmp < 0.0 ? (sint32)(uint8)
    -(sint8)(uint8)-tmp : (sint32)(uint8)tmp) + (uint8)(yL_0d0 < 0.0 ? (sint32)
    (uint8)-(sint8)(uint8)-yL_0d0 : (sint32)(uint8)yL_0d0)) - (float64)yL_1d) *
                   frac), 256.0);
  return (uint8)((uint32)(uint8)(tmp < 0.0 ? (sint32)(uint8)-(sint8)(uint8)-tmp :
    (sint32)(uint8)tmp) + yL_1d);
}

/* Model step function */
void ctrl2_1_Step(void)
{
  /* Outport generated from: '<Root>/Bus Element Out1' incorporates:
   *  Inport generated from: '<Root>/Bus Element In1'
   *  Inport generated from: '<Root>/Bus Element In2'
   *  Lookup_n-D: '<Root>/2-D Lookup Table'
   */
  Rte_IWrite_ctrl2_1_Step_OutBus_Value(look2_ifbdtdIu8dd_linlcpw
    (Rte_IRead_ctrl2_1_Step_InBus1_Value(), Rte_IRead_ctrl2_1_Step_InBus2_Value(),
     Rte_CData_L_4x6_single_ar()->BP1, Rte_CData_L_4x6_single_ar()->BP2,
     Rte_CData_L_4x6_single_ar()->Table, ctrl2_1_ConstP.uDLookupTable_maxIndex,
     3U));
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
