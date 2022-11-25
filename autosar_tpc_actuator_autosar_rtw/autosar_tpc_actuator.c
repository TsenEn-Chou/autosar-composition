/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: autosar_tpc_actuator.c
 *
 * Code generated for Simulink model 'autosar_tpc_actuator'.
 *
 * Model version                  : 5.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Nov 25 13:04:34 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "autosar_tpc_actuator.h"
#include "autosar_tpc_actuator_private.h"
#include "rtwtypes.h"

uint32 plook_u32f_linckan(float32 u, const float32 bp[], uint32 maxIndex)
{
  uint32 bpIndex;

  /* Prelookup - Index only
     Index Search method: 'linear'
     Interpolation method: 'Use nearest'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = linsearch_u32f(u, bp, maxIndex >> 1U);
    if ((bpIndex < maxIndex) && (bp[bpIndex + 1U] - u <= u - bp[bpIndex])) {
      bpIndex++;
    }
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}

uint32 linsearch_u32f(float32 u, const float32 bp[], uint32 startIndex)
{
  uint32 bpIndex;

  /* Linear Search */
  for (bpIndex = startIndex; u < bp[bpIndex]; bpIndex--) {
  }

  while (u >= bp[bpIndex + 1U]) {
    bpIndex++;
  }

  return bpIndex;
}

/* Model step function */
void Actuator_Step(void)
{
  /* Outport generated from: '<Root>/Out Bus Element' incorporates:
   *  Inport generated from: '<Root>/In Bus Element'
   *  Lookup_n-D: '<Root>/HBridgeDriver Lookup'
   */
  Rte_IWrite_Actuator_Step_ThrCmd_HwIO_Value((Rte_CData_HBridgeCmd_LkupTbl())
    ->Table[plook_u32f_linckan(Rte_IRead_Actuator_Step_ThrCmd_Percent_Value(),
    (Rte_CData_HBridgeCmd_LkupTbl())->BP1, 20U)]);
}

/* Model initialize function */
void Actuator_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
