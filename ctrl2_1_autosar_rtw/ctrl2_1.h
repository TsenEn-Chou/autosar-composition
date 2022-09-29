/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ctrl2_1.h
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

#ifndef RTW_HEADER_ctrl2_1_h_
#define RTW_HEADER_ctrl2_1_h_
#ifndef ctrl2_1_COMMON_INCLUDES_
#define ctrl2_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ctrl2.h"
#endif                                 /* ctrl2_1_COMMON_INCLUDES_ */

#include "ctrl2_1_types.h"
#include <math.h>

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<Root>/2-D Lookup Table'
   */
  uint32 uDLookupTable_maxIndex[2];

  /* Expression: my2d_LkupTbl.Table
   * Referenced by: '<Root>/2-D Lookup Table'
   */
  uint8 uDLookupTable_tableData[12];

  /* Expression: my2d_LkupTbl.Breakpoints(0)
   * Referenced by: '<Root>/2-D Lookup Table'
   */
  uint8 uDLookupTable_bp01Data[3];

  /* Expression: my2d_LkupTbl.Breakpoints(1)
   * Referenced by: '<Root>/2-D Lookup Table'
   */
  uint8 uDLookupTable_bp02Data[4];
} ConstP_ctrl2_1_T;

/* Constant parameters (default storage) */
extern const ConstP_ctrl2_1_T ctrl2_1_ConstP;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ctrl2_1'
 */
#endif                                 /* RTW_HEADER_ctrl2_1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
