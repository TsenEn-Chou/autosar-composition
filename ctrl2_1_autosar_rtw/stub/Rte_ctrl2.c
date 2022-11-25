/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ctrl2"
   ARXML schema: "4.3"
   File generated on: "25-Nov-2022 16:34:07"  */

#include "Rte_ctrl2.h"

/* Parameters */
m_LkupTbl Rte_CData_L_4x6_single_ar_data;
m_LkupTbl* Rte_CData_L_4x6_single_ar(void)
{
  return &Rte_CData_L_4x6_single_ar_data;
}
