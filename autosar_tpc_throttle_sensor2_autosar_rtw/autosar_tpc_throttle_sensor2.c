/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: autosar_tpc_throttle_sensor2.c
 *
 * Code generated for Simulink model 'autosar_tpc_throttle_sensor2'.
 *
 * Model version                  : 4.0
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Mon Apr 25 13:26:19 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "autosar_tpc_throttle_sensor2.h"
#include "Rte_Type.h"
#include "rtwtypes.h"
#include "look1_iflf_linlcpw.h"

/* Model step function */
void ThrottleSensor2_Step(void)
{
  Dem_EventStatusType tmp;

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant1'
   *  Inport generated from: '<Root>/In Bus Element'
   *  RelationalOperator: '<Root>/Relational Operator1'
   */
  if (Rte_IRead_ThrottleSensor2_Step_TPS_HwIO_Value() > 1000) {
    tmp = DEM_EVENT_STATUS_PREFAILED;
  } else {
    tmp = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S2>/Switch' */

  /* FunctionCaller: '<Root>/StuckHigh' */
  Rte_Call_S2StuckHigh_SetEventStatus(tmp);

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  DataStoreRead: '<Root>/Data Store Read'
   *  Inport generated from: '<Root>/In Bus Element'
   *  RelationalOperator: '<Root>/Relational Operator'
   */
  if (Rte_IRead_ThrottleSensor2_Step_TPS_HwIO_Value() <
      *Rte_Pim_autosar_tpc_throttl_LowSetPoint()) {
    tmp = DEM_EVENT_STATUS_PREFAILED;
  } else {
    tmp = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S1>/Switch' */

  /* FunctionCaller: '<Root>/StuckLow' */
  Rte_Call_S2StuckLow_SetEventStatus(tmp);

  /* Outport generated from: '<Root>/Out Bus Element' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  Inport generated from: '<Root>/In Bus Element'
   *  Lookup_n-D: '<Root>/TPS Lookup'
   */
  Rte_IWrite_ThrottleSensor2_Step_TPS_Secondary_Value(look1_iflf_linlcpw
    (Rte_IRead_ThrottleSensor2_Step_TPS_HwIO_Value(),
     (Rte_CData_TPSSecondaryPercent_LkupTbl())->BP1,
     (Rte_CData_TPSSecondaryPercent_LkupTbl())->Table, 10U));
}

/* Model initialize function */
void ThrottleSensor2_Init(void)
{
  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  *Rte_Pim_autosar_tpc_throttl_LowSetPoint() = 50U;

  /* Outputs for Atomic SubSystem: '<Root>/Initialize_Function' */
  /* FunctionCaller: '<S3>/NvMServiceCaller' */
  Rte_Call_S2LowSetPoint_ReadBlock(Rte_Pim_autosar_tpc_throttl_LowSetPoint());

  /* End of Outputs for SubSystem: '<Root>/Initialize_Function' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
