/*
 * Copyright (c) 2016-2020, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/* header file is included with -include compiler option
Instructions:
 - Remove the 'Template_' from the name and place this file into your 'src' folder.
 - Include it with the -include compiler option with:  "${ProjDirPath}/source/IncludeMcuLibConfig.h"
 - Add the following to the -I compiler option:
../McuLib
../McuLib/config
../McuLib/config/fonts
../McuLib/fonts
../McuLib/src
../McuLib/FreeRTOS/Source/include
../McuLib/FreeRTOS/Source/portable/GCC/ARM_CM4F
../McuLib/SEGGER_RTT
../McuLib/SEGGER_Sysview
../McuLib/TraceRecorder/config
../McuLib/TraceRecorder/include
../McuLib/TraceRecorder/streamports/Jlink_RTT/include
../McuLib/HD44780
../McuLib/FatFS
../McuLib/FatFS/source
 */

#ifndef INCLUDEMCULIBCONFIG_H_
#define INCLUDEMCULIBCONFIG_H_

/* ------------------- SDK/Library ---------------------------*/
#define McuLib_CONFIG_SDK_VERSION_USED  McuLib_CONFIG_SDK_MCUXPRESSO_2_0
/* set the CPU. See McuLibConfig.h for all supported CPUs */
//#define McuLib_CONFIG_CPU_IS_KINETIS    (0)  /* default CPU is NXP Kinetis */
//#define McuLib_CONFIG_CPU_IS_LPC        (1)  /* NXP LPC845 */
//#define McuLib_CONFIG_CPU_IS_IMXRT      (0)  /* NXP i.MX RT */
//#define McuLib_CONFIG_CPU_IS_LPC55xx    (0)  /* NXP LPC55xx */
//#define McuLib_CONFIG_CORTEX_M          (4)    /*!< 0: Cortex-M0, 3: M3, 4: M4, 7: M7, 33: M33, -1 otherwise */
/* ------------------- RTOS ---------------------------*/
//#define McuLib_CONFIG_SDK_USE_FREERTOS       (1)
//#define configUSE_SEGGER_SYSTEM_VIEWER_HOOKS (1)
//#define configTOTAL_HEAP_SIZE                (24*1024)
//#define configUSE_HEAP_SECTION_NAME          (1)
//#define configHEAP_SECTION_NAME_STRING       ".bss.$SRAM_LOWER.FreeRTOS"
/* ------------------- FatFS ---------------------------*/
//#define McuLib_CONFIG_USE_FAT_FS             (1)

#endif /* INCLUDEMCULIBCONFIG_H_ */
