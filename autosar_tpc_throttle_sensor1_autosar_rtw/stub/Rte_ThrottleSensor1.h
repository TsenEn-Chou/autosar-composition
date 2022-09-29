/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ThrottleSensor1"
   ARXML schema: "4.3"
   File generated on: "25-Apr-2022 13:26:06"  */

#ifndef Rte_ThrottleSensor1_h
#define Rte_ThrottleSensor1_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_ThrottleSensor1_Step_TPS_HwIO_Value Rte_IRead_ThrottleSensor1_ThrottleSensor1_Step_TPS_HwIO_Value

uint16 Rte_IRead_ThrottleSensor1_Step_TPS_HwIO_Value(void);

#define Rte_IWrite_ThrottleSensor1_Step_TPS_Primary_Value Rte_IWrite_ThrottleSensor1_ThrottleSensor1_Step_TPS_Primary_Value

void Rte_IWrite_ThrottleSensor1_Step_TPS_Primary_Value(float32 u);

#define Rte_IWriteRef_ThrottleSensor1_Step_TPS_Primary_Value Rte_IWriteRef_ThrottleSensor1_ThrottleSensor1_Step_TPS_Primary_Value

float32* Rte_IWriteRef_ThrottleSensor1_Step_TPS_Primary_Value(void);

/* Entry point functions */
extern FUNC(void, ThrottleSensor1_CODE) ThrottleSensor1_Init(void);
extern FUNC(void, ThrottleSensor1_CODE) ThrottleSensor1_Step(void);

/* Server operation call points */
#define Rte_Call_S1LowSetPoint_ReadBlock Rte_Call_ThrottleSensor1_S1LowSetPoint_ReadBlock

Std_ReturnType Rte_Call_S1LowSetPoint_ReadBlock(void* DstPtr);

#define Rte_Call_S1StuckHigh_SetEventStatus Rte_Call_ThrottleSensor1_S1StuckHigh_SetEventStatus

Std_ReturnType Rte_Call_S1StuckHigh_SetEventStatus(Dem_EventStatusType
  EventStatus);

#define Rte_Call_S1StuckLow_SetEventStatus Rte_Call_ThrottleSensor1_S1StuckLow_SetEventStatus

Std_ReturnType Rte_Call_S1StuckLow_SetEventStatus(Dem_EventStatusType
  EventStatus);

/* Parameters */
extern MyStruct Rte_CData_TPSPrimaryPercent_LkupTbl_data;

#define Rte_CData_TPSPrimaryPercent_LkupTbl Rte_CData_ThrottleSensor1_TPSPrimaryPercent_LkupTbl

MyStruct* Rte_CData_TPSPrimaryPercent_LkupTbl(void);

/* AR-Typed Per Instance Memories */
uint8* Rte_Pim_autosar_tpc_throttl_LowSetPoint(void);

#endif
