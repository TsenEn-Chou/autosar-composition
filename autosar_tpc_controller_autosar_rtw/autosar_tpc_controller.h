/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: autosar_tpc_controller.h
 *
 * Code generated for Simulink model 'autosar_tpc_controller'.
 *
 * Model version                  : 5.0
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Mon Apr 25 13:25:18 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_autosar_tpc_controller_h_
#define RTW_HEADER_autosar_tpc_controller_h_
#ifndef autosar_tpc_controller_COMMON_INCLUDES_
#define autosar_tpc_controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_Controller.h"
#endif                             /* autosar_tpc_controller_COMMON_INCLUDES_ */

#include "autosar_tpc_controller_types.h"

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_autosar_tpc_controller_T {
  float32 Integrator_DSTATE;           /* '<S37>/Integrator' */
  float32 UD_DSTATE;                   /* '<S30>/UD' */
} DW_autosar_tpc_controller_T;

/* Block states (default storage) */
extern DW_autosar_tpc_controller_T autosar_tpc_controller_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S30>/DTDup' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S42>/Proportional Gain' : Eliminated nontunable gain of 1
 */

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
 * '<Root>' : 'autosar_tpc_controller'
 * '<S1>'   : 'autosar_tpc_controller/Discrete PID Controller'
 * '<S2>'   : 'autosar_tpc_controller/Discrete PID Controller/Anti-windup'
 * '<S3>'   : 'autosar_tpc_controller/Discrete PID Controller/D Gain'
 * '<S4>'   : 'autosar_tpc_controller/Discrete PID Controller/Filter'
 * '<S5>'   : 'autosar_tpc_controller/Discrete PID Controller/Filter ICs'
 * '<S6>'   : 'autosar_tpc_controller/Discrete PID Controller/I Gain'
 * '<S7>'   : 'autosar_tpc_controller/Discrete PID Controller/Ideal P Gain'
 * '<S8>'   : 'autosar_tpc_controller/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S9>'   : 'autosar_tpc_controller/Discrete PID Controller/Integrator'
 * '<S10>'  : 'autosar_tpc_controller/Discrete PID Controller/Integrator ICs'
 * '<S11>'  : 'autosar_tpc_controller/Discrete PID Controller/N Copy'
 * '<S12>'  : 'autosar_tpc_controller/Discrete PID Controller/N Gain'
 * '<S13>'  : 'autosar_tpc_controller/Discrete PID Controller/P Copy'
 * '<S14>'  : 'autosar_tpc_controller/Discrete PID Controller/Parallel P Gain'
 * '<S15>'  : 'autosar_tpc_controller/Discrete PID Controller/Reset Signal'
 * '<S16>'  : 'autosar_tpc_controller/Discrete PID Controller/Saturation'
 * '<S17>'  : 'autosar_tpc_controller/Discrete PID Controller/Saturation Fdbk'
 * '<S18>'  : 'autosar_tpc_controller/Discrete PID Controller/Sum'
 * '<S19>'  : 'autosar_tpc_controller/Discrete PID Controller/Sum Fdbk'
 * '<S20>'  : 'autosar_tpc_controller/Discrete PID Controller/Tracking Mode'
 * '<S21>'  : 'autosar_tpc_controller/Discrete PID Controller/Tracking Mode Sum'
 * '<S22>'  : 'autosar_tpc_controller/Discrete PID Controller/Tsamp - Integral'
 * '<S23>'  : 'autosar_tpc_controller/Discrete PID Controller/Tsamp - Ngain'
 * '<S24>'  : 'autosar_tpc_controller/Discrete PID Controller/postSat Signal'
 * '<S25>'  : 'autosar_tpc_controller/Discrete PID Controller/preSat Signal'
 * '<S26>'  : 'autosar_tpc_controller/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S27>'  : 'autosar_tpc_controller/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S28>'  : 'autosar_tpc_controller/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S29>'  : 'autosar_tpc_controller/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S30>'  : 'autosar_tpc_controller/Discrete PID Controller/Filter/Differentiator'
 * '<S31>'  : 'autosar_tpc_controller/Discrete PID Controller/Filter/Differentiator/Tsamp'
 * '<S32>'  : 'autosar_tpc_controller/Discrete PID Controller/Filter/Differentiator/Tsamp/Internal Ts'
 * '<S33>'  : 'autosar_tpc_controller/Discrete PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S34>'  : 'autosar_tpc_controller/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S35>'  : 'autosar_tpc_controller/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S36>'  : 'autosar_tpc_controller/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S37>'  : 'autosar_tpc_controller/Discrete PID Controller/Integrator/Discrete'
 * '<S38>'  : 'autosar_tpc_controller/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S39>'  : 'autosar_tpc_controller/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S40>'  : 'autosar_tpc_controller/Discrete PID Controller/N Gain/Passthrough'
 * '<S41>'  : 'autosar_tpc_controller/Discrete PID Controller/P Copy/Disabled'
 * '<S42>'  : 'autosar_tpc_controller/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S43>'  : 'autosar_tpc_controller/Discrete PID Controller/Reset Signal/Disabled'
 * '<S44>'  : 'autosar_tpc_controller/Discrete PID Controller/Saturation/Enabled'
 * '<S45>'  : 'autosar_tpc_controller/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S46>'  : 'autosar_tpc_controller/Discrete PID Controller/Sum/Sum_PID'
 * '<S47>'  : 'autosar_tpc_controller/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S48>'  : 'autosar_tpc_controller/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S49>'  : 'autosar_tpc_controller/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S50>'  : 'autosar_tpc_controller/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S51>'  : 'autosar_tpc_controller/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S52>'  : 'autosar_tpc_controller/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S53>'  : 'autosar_tpc_controller/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                                /* RTW_HEADER_autosar_tpc_controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
