/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: autosar_tpc_throttle_sensor_monitor.c
 *
 * Code generated for Simulink model 'autosar_tpc_throttle_sensor_monitor'.
 *
 * Model version                  : 5.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Fri Nov 25 16:34:18 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "autosar_tpc_throttle_sensor_monitor.h"
#include "rtwtypes.h"
#include "Rte_Type.h"

/* Model step function */
void ThrottleSensorMonitor_Step(void)
{
  float32 rtb_Switch1;
  Dem_EventStatusType tmp;
  boolean rtb_LogicalOperator;
  boolean rtb_LogicalOperator1;
  boolean rtb_TPS2StuckHigh_o1;

  /* FunctionCaller: '<Root>/TPS1StuckLow' */
  Rte_Call_TPS1StuckLow_GetEventFailed(&rtb_TPS2StuckHigh_o1);

  /* FunctionCaller: '<Root>/TPS1StuckHigh' */
  Rte_Call_TPS1StuckHigh_GetEventFailed(&rtb_LogicalOperator1);

  /* Logic: '<Root>/Logical Operator' */
  rtb_LogicalOperator = (rtb_TPS2StuckHigh_o1 || rtb_LogicalOperator1);

  /* FunctionCaller: '<Root>/TPS2StuckLow' */
  Rte_Call_TPS2StuckLow_GetEventFailed(&rtb_LogicalOperator1);

  /* FunctionCaller: '<Root>/TPS2StuckHigh' */
  Rte_Call_TPS2StuckHigh_GetEventFailed(&rtb_TPS2StuckHigh_o1);

  /* Logic: '<Root>/Logical Operator1' incorporates:
   *  Logic: '<Root>/Logical Operator2'
   */
  rtb_LogicalOperator1 = (rtb_LogicalOperator && (rtb_LogicalOperator1 ||
    rtb_TPS2StuckHigh_o1));

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Switch: '<Root>/Switch'
   *  Switch: '<S1>/Switch'
   */
  if (rtb_LogicalOperator1) {
    /* Switch: '<Root>/Switch1' incorporates:
     *  Constant: '<Root>/Constant'
     */
    rtb_Switch1 = 0.0F;
    tmp = DEM_EVENT_STATUS_FAILED;
  } else {
    if (rtb_LogicalOperator) {
      /* Switch: '<Root>/Switch' incorporates:
       *  Inport generated from: '<Root>/In Bus Element'
       *  Switch: '<Root>/Switch1'
       */
      rtb_Switch1 = Rte_IRead_ThrottleSensorMonitor_Step_TPS_Secondary_Value();
    } else {
      /* Switch: '<Root>/Switch1' incorporates:
       *  Inport generated from: '<Root>/In Bus Element1'
       *  Switch: '<Root>/Switch'
       */
      rtb_Switch1 = Rte_IRead_ThrottleSensorMonitor_Step_TPS_Primary_Value();
    }

    tmp = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* FunctionCaller: '<Root>/TPS' */
  Rte_Call_TPS_SetEventStatus(tmp);

  /* Outport generated from: '<Root>/Out Bus Element' */
  Rte_IWrite_ThrottleSensorMonitor_Step_TPS_Percent_Value(rtb_Switch1);
}

/* Model initialize function */
void ThrottleSensorMonitor_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
