/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ThrottleSensorMonitor"
   ARXML schema: "4.3"
   File generated on: "25-Nov-2022 16:34:22"  */

#ifndef Rte_ThrottleSensorMonitor_h
#define Rte_ThrottleSensorMonitor_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_ThrottleSensorMonitor_Step_TPS_Secondary_Value Rte_IRead_ThrottleSensorMonitor_ThrottleSensorMonitor_Step_TPS_Secondary_Value

float32 Rte_IRead_ThrottleSensorMonitor_Step_TPS_Secondary_Value(void);

#define Rte_IRead_ThrottleSensorMonitor_Step_TPS_Primary_Value Rte_IRead_ThrottleSensorMonitor_ThrottleSensorMonitor_Step_TPS_Primary_Value

float32 Rte_IRead_ThrottleSensorMonitor_Step_TPS_Primary_Value(void);

#define Rte_IWrite_ThrottleSensorMonitor_Step_TPS_Percent_Value Rte_IWrite_ThrottleSensorMonitor_ThrottleSensorMonitor_Step_TPS_Percent_Value

void Rte_IWrite_ThrottleSensorMonitor_Step_TPS_Percent_Value(float32 u);

#define Rte_IWriteRef_ThrottleSensorMonitor_Step_TPS_Percent_Value Rte_IWriteRef_ThrottleSensorMonitor_ThrottleSensorMonitor_Step_TPS_Percent_Value

float32* Rte_IWriteRef_ThrottleSensorMonitor_Step_TPS_Percent_Value(void);

/* Entry point functions */
extern FUNC(void, ThrottleSensorMonitor_CODE) ThrottleSensorMonitor_Init(void);
extern FUNC(void, ThrottleSensorMonitor_CODE) ThrottleSensorMonitor_Step(void);

/* Server operation call points */
#define Rte_Call_TPS1StuckHigh_GetEventFailed Rte_Call_ThrottleSensorMonitor_TPS1StuckHigh_GetEventFailed

Std_ReturnType Rte_Call_TPS1StuckHigh_GetEventFailed(boolean* EventFailed);

#define Rte_Call_TPS1StuckLow_GetEventFailed Rte_Call_ThrottleSensorMonitor_TPS1StuckLow_GetEventFailed

Std_ReturnType Rte_Call_TPS1StuckLow_GetEventFailed(boolean* EventFailed);

#define Rte_Call_TPS2StuckHigh_GetEventFailed Rte_Call_ThrottleSensorMonitor_TPS2StuckHigh_GetEventFailed

Std_ReturnType Rte_Call_TPS2StuckHigh_GetEventFailed(boolean* EventFailed);

#define Rte_Call_TPS2StuckLow_GetEventFailed Rte_Call_ThrottleSensorMonitor_TPS2StuckLow_GetEventFailed

Std_ReturnType Rte_Call_TPS2StuckLow_GetEventFailed(boolean* EventFailed);

#define Rte_Call_TPS_SetEventStatus    Rte_Call_ThrottleSensorMonitor_TPS_SetEventStatus

Std_ReturnType Rte_Call_TPS_SetEventStatus(Dem_EventStatusType EventStatus);

#endif
