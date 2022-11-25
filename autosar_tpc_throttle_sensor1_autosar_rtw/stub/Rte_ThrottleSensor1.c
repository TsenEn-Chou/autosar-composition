/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ThrottleSensor1"
   ARXML schema: "4.3"
   File generated on: "25-Nov-2022 16:34:56"  */

#include "Rte_ThrottleSensor1.h"

/* Parameters */
MyStruct Rte_CData_TPSPrimaryPercent_LkupTbl_data = {
  { 170.0F, 249.6F, 329.2F, 408.8F, 488.4F, 568.0F, 647.6F, 727.2F, 806.8F,
    886.4F, 966.0F },

  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
  }
} ;

MyStruct* Rte_CData_TPSPrimaryPercent_LkupTbl(void)
{
  return &Rte_CData_TPSPrimaryPercent_LkupTbl_data;
}

/* AR-Typed Per Instance Memories */
uint8 Rte_Pim_autosar_tpc_throttl_LowSetPoint_data;
uint8* Rte_Pim_autosar_tpc_throttl_LowSetPoint(void)
{
  return &Rte_Pim_autosar_tpc_throttl_LowSetPoint_data;
}
