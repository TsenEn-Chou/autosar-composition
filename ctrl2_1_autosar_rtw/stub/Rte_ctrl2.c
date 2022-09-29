/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ctrl2"
   ARXML schema: "4.3"
   File generated on: "18-Jul-2022 15:49:10"  */

#include "Rte_ctrl2.h"

/* Parameters */
MyStruct Rte_CData_my2d_LkupTbl_data;
MyStruct* Rte_CData_my2d_LkupTbl(void)
{
  return &Rte_CData_my2d_LkupTbl_data;
}
