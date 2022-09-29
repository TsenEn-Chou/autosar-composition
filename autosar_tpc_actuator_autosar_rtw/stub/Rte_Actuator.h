/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "Actuator"
   ARXML schema: "4.3"
   File generated on: "25-Apr-2022 13:25:01"  */

#ifndef Rte_Actuator_h
#define Rte_Actuator_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_Actuator_Step_ThrCmd_Percent_Value Rte_IRead_Actuator_Actuator_Step_ThrCmd_Percent_Value

Float Rte_IRead_Actuator_Step_ThrCmd_Percent_Value(void);

#define Rte_IWrite_Actuator_Step_ThrCmd_HwIO_Value Rte_IWrite_Actuator_Actuator_Step_ThrCmd_HwIO_Value

void Rte_IWrite_Actuator_Step_ThrCmd_HwIO_Value(SInt16 u);

#define Rte_IWriteRef_Actuator_Step_ThrCmd_HwIO_Value Rte_IWriteRef_Actuator_Actuator_Step_ThrCmd_HwIO_Value

SInt16* Rte_IWriteRef_Actuator_Step_ThrCmd_HwIO_Value(void);

/* Entry point functions */
extern FUNC(void, Actuator_CODE) Actuator_Init(void);
extern FUNC(void, Actuator_CODE) Actuator_Step(void);

/* Parameters */
extern MyStruct_Actuator Rte_CData_HBridgeCmd_LkupTbl_data;

#define Rte_CData_HBridgeCmd_LkupTbl   Rte_CData_Actuator_HBridgeCmd_LkupTbl

MyStruct_Actuator* Rte_CData_HBridgeCmd_LkupTbl(void);

#endif
