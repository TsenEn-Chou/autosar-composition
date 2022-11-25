/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ctrl2"
   ARXML schema: "4.3"
   File generated on: "25-Nov-2022 16:34:07"  */

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
extern m_LkupTbl Rte_CData_L_4x6_single_ar_data;

#define Rte_CData_L_4x6_single_ar      Rte_CData_ctrl2_L_4x6_single_ar

m_LkupTbl* Rte_CData_L_4x6_single_ar(void);

#endif
