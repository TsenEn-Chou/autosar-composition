/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ctrl2"
   ARXML schema: "4.3"
   File generated on: "18-Jul-2022 15:49:10"  */

#ifndef Rte_ctrl2_h
#define Rte_ctrl2_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_ctrl2_1_Step_InBus1_Value Rte_IRead_ctrl2_ctrl2_1_Step_InBus1_Value

Float Rte_IRead_ctrl2_1_Step_InBus1_Value(void);

#define Rte_IRead_ctrl2_1_Step_InBus2_Value Rte_IRead_ctrl2_ctrl2_1_Step_InBus2_Value

Float Rte_IRead_ctrl2_1_Step_InBus2_Value(void);

#define Rte_IWrite_ctrl2_1_Step_OutBus_Value Rte_IWrite_ctrl2_ctrl2_1_Step_OutBus_Value

void Rte_IWrite_ctrl2_1_Step_OutBus_Value(UInt8 u);

#define Rte_IWriteRef_ctrl2_1_Step_OutBus_Value Rte_IWriteRef_ctrl2_ctrl2_1_Step_OutBus_Value

UInt8* Rte_IWriteRef_ctrl2_1_Step_OutBus_Value(void);

/* Entry point functions */
extern FUNC(void, ctrl2_CODE) ctrl2_1_Init(void);
extern FUNC(void, ctrl2_CODE) ctrl2_1_Step(void);

/* Parameters */
extern MyStruct Rte_CData_my2d_LkupTbl_data;

#define Rte_CData_my2d_LkupTbl         Rte_CData_ctrl2_my2d_LkupTbl

MyStruct* Rte_CData_my2d_LkupTbl(void);

#endif
