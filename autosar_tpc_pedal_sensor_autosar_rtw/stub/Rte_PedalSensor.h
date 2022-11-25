/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "PedalSensor"
   ARXML schema: "4.3"
   File generated on: "25-Nov-2022 16:34:39"  */

#ifndef Rte_PedalSensor_h
#define Rte_PedalSensor_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_PedalSensor_Step_APP_HwIO_Value Rte_IRead_PedalSensor_PedalSensor_Step_APP_HwIO_Value

UInt16 Rte_IRead_PedalSensor_Step_APP_HwIO_Value(void);

#define Rte_IWrite_PedalSensor_Step_APP_Percent_Value Rte_IWrite_PedalSensor_PedalSensor_Step_APP_Percent_Value

void Rte_IWrite_PedalSensor_Step_APP_Percent_Value(Float u);

#define Rte_IWriteRef_PedalSensor_Step_APP_Percent_Value Rte_IWriteRef_PedalSensor_PedalSensor_Step_APP_Percent_Value

Float* Rte_IWriteRef_PedalSensor_Step_APP_Percent_Value(void);

/* Entry point functions */
extern FUNC(void, PedalSensor_CODE) PedalSensor_Init(void);
extern FUNC(void, PedalSensor_CODE) PedalSensor_Step(void);

/* Parameters */
extern MyStruct Rte_CData_SetpointPercent_LkupTbl_data;

#define Rte_CData_SetpointPercent_LkupTbl Rte_CData_PedalSensor_SetpointPercent_LkupTbl

MyStruct* Rte_CData_SetpointPercent_LkupTbl(void);

#endif
