/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "PedalSensor"
   ARXML schema: "4.3"
   File generated on: "25-Apr-2022 13:25:50"  */

#include "Rte_PedalSensor.h"

/* Parameters */
MyStruct Rte_CData_SetpointPercent_LkupTbl_data = {
  { 170.0F, 251.5F, 333.0F, 414.5F, 496.0F, 577.5F, 659.0F, 740.5F, 822.0F,
    903.5F, 985.0F },

  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
  }
} ;

MyStruct* Rte_CData_SetpointPercent_LkupTbl(void)
{
  return &Rte_CData_SetpointPercent_LkupTbl_data;
}
