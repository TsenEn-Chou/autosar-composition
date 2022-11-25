/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ThrottleSensor2"
   ARXML schema: "4.3"
   File generated on: "25-Nov-2022 16:35:18"  */

#ifndef Rte_ThrottleSensor2_h
#define Rte_ThrottleSensor2_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_ThrottleSensor2_Step_TPS_HwIO_Value Rte_IRead_ThrottleSensor2_ThrottleSensor2_Step_TPS_HwIO_Value

uint16 Rte_IRead_ThrottleSensor2_Step_TPS_HwIO_Value(void);

#define Rte_IWrite_ThrottleSensor2_Step_TPS_Secondary_Value Rte_IWrite_ThrottleSensor2_ThrottleSensor2_Step_TPS_Secondary_Value

void Rte_IWrite_ThrottleSensor2_Step_TPS_Secondary_Value(float32 u);

#define Rte_IWriteRef_ThrottleSensor2_Step_TPS_Secondary_Value Rte_IWriteRef_ThrottleSensor2_ThrottleSensor2_Step_TPS_Secondary_Value

float32* Rte_IWriteRef_ThrottleSensor2_Step_TPS_Secondary_Value(void);

/* Entry point functions */
extern FUNC(void, ThrottleSensor2_CODE) ThrottleSensor2_Init(void);
extern FUNC(void, ThrottleSensor2_CODE) ThrottleSensor2_Step(void);

/* Server operation call points */
#define Rte_Call_S2LowSetPoint_ReadBlock Rte_Call_ThrottleSensor2_S2LowSetPoint_ReadBlock

Std_ReturnType Rte_Call_S2LowSetPoint_ReadBlock(void* DstPtr);

#define Rte_Call_S2StuckHigh_SetEventStatus Rte_Call_ThrottleSensor2_S2StuckHigh_SetEventStatus

Std_ReturnType Rte_Call_S2StuckHigh_SetEventStatus(Dem_EventStatusType
  EventStatus);

#define Rte_Call_S2StuckLow_SetEventStatus Rte_Call_ThrottleSensor2_S2StuckLow_SetEventStatus

Std_ReturnType Rte_Call_S2StuckLow_SetEventStatus(Dem_EventStatusType
  EventStatus);

/* Parameters */
extern MyStruct Rte_CData_TPSSecondaryPercent_LkupTbl_data;

#define Rte_CData_TPSSecondaryPercent_LkupTbl Rte_CData_ThrottleSensor2_TPSSecondaryPercent_LkupTbl

MyStruct* Rte_CData_TPSSecondaryPercent_LkupTbl(void);

/* AR-Typed Per Instance Memories */
uint8* Rte_Pim_autosar_tpc_throttl_LowSetPoint(void);

#endif
