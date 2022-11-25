/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "Actuator"
   ARXML schema: "4.3"
   File generated on: "25-Nov-2022 13:04:44"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef Actuator_START_SEC_CODE
#undef Actuator_START_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( Actuator_START_SEC_CONST)
#undef Actuator_START_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( Actuator_START_SEC_VAR)
#undef Actuator_START_SEC_VAR
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef Actuator_STOP_SEC_CODE
#undef Actuator_STOP_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( Actuator_STOP_SEC_CONST)
#undef Actuator_STOP_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( Actuator_STOP_SEC_VAR)
#undef Actuator_STOP_SEC_VAR
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "Actuator_MemMap.h wrong pragma command"
#endif
#endif
