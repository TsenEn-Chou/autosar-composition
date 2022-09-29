/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: autosar_tpc_controller.c
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

#include "autosar_tpc_controller.h"
#include "rtwtypes.h"

/* Block states (default storage) */
DW_autosar_tpc_controller_T autosar_tpc_controller_DW;

/* Model step function */
void Controller_Step(void)
{
  float32 rtb_DeadZone;
  float32 rtb_IntegralGain;
  float32 rtb_Sum;
  sint8 rtb_DeadZone_0;
  sint8 rtb_IntegralGain_0;

  /* Gain: '<S34>/Integral Gain' incorporates:
   *  Inport generated from: '<Root>/In Bus Element1'
   *  Inport generated from: '<Root>/In Bus Element'
   *  Sum: '<Root>/Subtract'
   */
  rtb_IntegralGain = Rte_IRead_Controller_Step_APP_Percent_Value() -
    Rte_IRead_Controller_Step_TPS_Percent_Value();

  /* Sum: '<S46>/Sum' incorporates:
   *  Delay: '<S30>/UD'
   *  DiscreteIntegrator: '<S37>/Integrator'
   *  Sum: '<S30>/Diff'
   */
  rtb_Sum = (rtb_IntegralGain + autosar_tpc_controller_DW.Integrator_DSTATE) +
    (0.0F - autosar_tpc_controller_DW.UD_DSTATE);

  /* DeadZone: '<S28>/DeadZone' */
  if (rtb_Sum > 100.0F) {
    /* DeadZone: '<S28>/DeadZone' */
    rtb_DeadZone = rtb_Sum - 100.0F;
  } else if (rtb_Sum >= -100.0F) {
    /* DeadZone: '<S28>/DeadZone' */
    rtb_DeadZone = 0.0F;
  } else {
    /* DeadZone: '<S28>/DeadZone' */
    rtb_DeadZone = rtb_Sum - -100.0F;
  }

  /* End of DeadZone: '<S28>/DeadZone' */

  /* Gain: '<S34>/Integral Gain' */
  rtb_IntegralGain *= 2.0F;

  /* Switch: '<S26>/Switch1' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S26>/Constant2'
   *  Constant: '<S26>/Constant5'
   *  RelationalOperator: '<S26>/fix for DT propagation issue'
   */
  if (rtb_DeadZone > 0.0F) {
    rtb_DeadZone_0 = 1;
  } else {
    rtb_DeadZone_0 = -1;
  }

  /* End of Switch: '<S26>/Switch1' */

  /* Switch: '<S26>/Switch2' incorporates:
   *  Constant: '<S26>/Constant3'
   *  Constant: '<S26>/Constant4'
   *  Constant: '<S26>/Constant5'
   *  RelationalOperator: '<S26>/fix for DT propagation issue1'
   */
  if (rtb_IntegralGain > 0.0F) {
    rtb_IntegralGain_0 = 1;
  } else {
    rtb_IntegralGain_0 = -1;
  }

  /* End of Switch: '<S26>/Switch2' */

  /* Switch: '<S26>/Switch' incorporates:
   *  Constant: '<S26>/Constant1'
   *  Constant: '<S26>/Constant5'
   *  Logic: '<S26>/AND3'
   *  RelationalOperator: '<S26>/Equal1'
   *  RelationalOperator: '<S26>/Relational Operator'
   */
  if ((rtb_DeadZone != 0.0F) && (rtb_DeadZone_0 == rtb_IntegralGain_0)) {
    rtb_IntegralGain = 0.0F;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Update for DiscreteIntegrator: '<S37>/Integrator' */
  autosar_tpc_controller_DW.Integrator_DSTATE += 0.005F * rtb_IntegralGain;

  /* Update for Delay: '<S30>/UD' */
  autosar_tpc_controller_DW.UD_DSTATE = 0.0F;

  /* Saturate: '<S44>/Saturation' */
  if (rtb_Sum > 100.0F) {
    rtb_Sum = 100.0F;
  } else if (rtb_Sum < -100.0F) {
    rtb_Sum = -100.0F;
  }

  /* End of Saturate: '<S44>/Saturation' */

  /* Outport generated from: '<Root>/Out Bus Element' */
  Rte_IWrite_Controller_Step_ThrCmd_Percent_Value(rtb_Sum);
}

/* Model initialize function */
void Controller_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
