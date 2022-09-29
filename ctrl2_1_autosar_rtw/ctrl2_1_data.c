/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ctrl2_1_data.c
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

/* Constant parameters (default storage) */
const ConstP_ctrl2_1_T ctrl2_1_ConstP = {
  /* Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<Root>/2-D Lookup Table'
   */
  { 2U, 3U },

  /* Expression: my2d_LkupTbl.Table
   * Referenced by: '<Root>/2-D Lookup Table'
   */
  { 2U, 3U, 4U, 3U, 4U, 5U, 4U, 5U, 6U, 5U, 6U, 7U },

  /* Expression: my2d_LkupTbl.Breakpoints(0)
   * Referenced by: '<Root>/2-D Lookup Table'
   */
  { 1U, 2U, 3U },

  /* Expression: my2d_LkupTbl.Breakpoints(1)
   * Referenced by: '<Root>/2-D Lookup Table'
   */
  { 1U, 2U, 3U, 4U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
