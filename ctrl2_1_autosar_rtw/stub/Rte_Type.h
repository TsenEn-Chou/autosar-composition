/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "ctrl2"
   ARXML schema: "4.3"
   File generated on: "18-Jul-2022 15:49:10"  */

#ifndef Rte_Type_h
#define Rte_Type_h
#include "rtwtypes.h"
#include "Std_Types.h"

/* AUTOSAR RTE Status Types */
#ifndef RTE_E_OK
#define RTE_E_OK                       (0x00)
#endif

#ifndef RTE_E_LOST_DATA
#define RTE_E_LOST_DATA                (0x40)
#endif

#ifndef RTE_E_LIMIT
#define RTE_E_LIMIT                    (0x82)
#endif

#ifndef E2E_E_OK
#define E2E_E_OK                       (0x00)
#endif

#ifndef E2EPW_STATUS_OK
#define E2EPW_STATUS_OK                (0x00)
#endif

#ifndef E2EPW_STATUS_OKSOMELOST
#define E2EPW_STATUS_OKSOMELOST        (0x20)
#endif

/* AUTOSAR Implementation data types, specific to software component */
typedef uint32 UInt32;
typedef float32 Float;
typedef float64 Double;
typedef uint8 UInt8;

/* AUTOSAR Structure Types */
#ifndef DEFINED_TYPEDEF_FOR_MyStruct_
#define DEFINED_TYPEDEF_FOR_MyStruct_

typedef struct {
  UInt32 N2;
  UInt32 N1;
  Float BP2[4];
  Float BP1[3];
  Double Table[12];
} MyStruct;

#endif

/* AUTOSAR Array Types */
typedef Double rt_Array_Double_12[12];
typedef Float rt_Array_Float_3[3];
typedef Float rt_Array_Float_4[4];
typedef void* Rte_Instance;

#endif
