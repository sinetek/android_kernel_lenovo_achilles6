/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include "kd_imgsensor.h"
#include "imgsensor_sensor_list.h"

/* Add Sensor Init function here
 * Note:
 * 1. Add by the resolution from ""large to small"", due to large sensor
 *    will be possible to be main sensor.
 *    This can avoid I2C error during searching sensor.
 * 2. This should be the same as
 *     mediatek\custom\common\hal\imgsensor\src\sensorlist.cpp
 */
struct IMGSENSOR_INIT_FUNC_LIST kdSensorList[MAX_NUM_OF_SUPPORT_SENSOR] = {
#if defined(N8_HI1336_XL_MIPI_RAW)
	{N8_HI1336_XL_SENSOR_ID,
	SENSOR_DRVNAME_N8_HI1336_XL_MIPI_RAW,
	N8_HI1336_XL_MIPI_RAW_SensorInit},
#endif
#if defined(N8_HI1336_TXD_MIPI_RAW)
	{N8_HI1336_TXD_SENSOR_ID,
	SENSOR_DRVNAME_N8_HI1336_TXD_MIPI_RAW,
	N8_HI1336_TXD_MIPI_RAW_SensorInit},
#endif
#if defined(N8_S5K3L6_HLT_MIPI_RAW)
	{N8_S5K3L6_HLT_SENSOR_ID,
	SENSOR_DRVNAME_N8_S5K3L6_HLT_MIPI_RAW,
	N8_S5K3L6_HLT_MIPI_RAW_SensorInit},
#endif
#if defined(N8_HI846_SHT_MIPI_RAW)
	{N8_HI846_SHT_SENSOR_ID,
	SENSOR_DRVNAME_N8_HI846_SHT_MIPI_RAW,
	N8_HI846_SHT_MIPI_RAW_SensorInit},
#endif
#if defined(N8_HI846_LY_MIPI_RAW)
	{N8_HI846_LY_SENSOR_ID,
	SENSOR_DRVNAME_N8_HI846_LY_MIPI_RAW,
	N8_HI846_LY_MIPI_RAW_SensorInit},
#endif
#if defined(N8_GC2375H_HLT_MIPI_RAW)
	{N8_GC2375H_HLT_MIPI_SENSOR_ID,
	SENSOR_DRVNAME_N8_GC2375H_HLT_MIPI_RAW,
	N8_GC2375H_HLT_MIPI_RAW_SensorInit},
#endif
#if defined(N8_GC2375A_QH_MIPI_RAW)
	{N8_GC2375A_QH_MIPI_SENSOR_ID,
	SENSOR_DRVNAME_N8_GC2375A_QH_MIPI_RAW,
	N8_GC2375A_QH_MIPI_RAW_SensorInit},
#endif
#if defined(N8_GC8034_TXD_MIPI_RAW)
	{N8_GC8034_TXD_MIPI_SENSOR_ID,
	SENSOR_DRVNAME_N8_GC8034_TXD_MIPI_RAW,
	N8_GC8034_TXD_MIPI_RAW_SensorInit},
#endif
#if defined(N8_BF2253_QH_MIPI_RAW)
	{N8_BF2253_QH_MIPI_SENSOR_ID,
	SENSOR_DRVNAME_N8_BF2253_QH_MIPI_RAW,
	N8_BF2253_QH_MIPI_RAW_SensorInit},
#endif

#if defined(N21_TXD_SUB_S5K3L6_MIPI_RAW)
	{N21_TXD_SUB_S5K3L6_SENSOR_ID,
	SENSOR_DRVNAME_N21_TXD_SUB_S5K3L6_MIPI_RAW,
	N21_TXD_SUB_S5K3L6_MIPI_RAW_SensorInit},
#endif
#if defined(N21_TXD_MAIN_S5K2P6_MIPI_RAW)
	{N21_TXD_MAIN_S5K2P6_SENSOR_ID,
	SENSOR_DRVNAME_N21_TXD_MAIN_S5K2P6_MIPI_RAW,
	N21_TXD_MAIN_S5K2P6_MIPI_RAW_SensorInit},
#endif
#if defined(N21_HLT_MAIN_OV16B10_MIPI_RAW)
	{N21_HLT_MAIN_OV16B10_SENSOR_ID,
	SENSOR_DRVNAME_N21_HLT_MAIN_OV16B10_MIPI_RAW,
	N21_HLT_MAIN_OV16B10_MIPI_RAW_SensorInit},
#endif
#if defined(N21_DONGCI_MAIN_S5K2P6_MIPI_RAW)
	{N21_DONGCI_MAIN_S5K2P6_SENSOR_ID,
	SENSOR_DRVNAME_N21_DONGCI_MAIN_S5K2P6_MIPI_RAW,
	N21_DONGCI_MAIN_S5K2P6_MIPI_RAW_SensorInit},
#endif
#if defined(N21_SHINE_SUB_HI1336_MIPI_RAW)
	{N21_SHINE_SUB_HI1336_SENSOR_ID,
	SENSOR_DRVNAME_N21_SHINE_SUB_HI1336_MIPI_RAW,
	N21_SHINE_SUB_HI1336_MIPI_RAW_SensorInit},
#endif
#if defined(N21_HLT_SUB_HI1336_MIPI_RAW)
	{N21_HLT_SUB_HI1336_SENSOR_ID,
	SENSOR_DRVNAME_N21_HLT_SUB_HI1336_MIPI_RAW,
	N21_HLT_SUB_HI1336_MIPI_RAW_SensorInit},
#endif
#if defined(N21_CXT_DEPTH_GC2375H_MIPI_RAW)
	{N21_CXT_DEPTH_GC2375H_SENSOR_ID,
	SENSOR_DRVNAME_N21_CXT_DEPTH_GC2375H_MIPI_RAW,
	N21_CXT_DEPTH_GC2375H_MIPI_RAW_SensorInit},
#endif
//bug 530174,gaoyu1.wt,add,20200113,bring up depth gc02m1b
#if defined(N21_CXT_DEPTH_GC02M1B_MIPI_RAW)
        {N21_CXT_DEPTH_GC02M1B_SENSOR_ID,
        SENSOR_DRVNAME_N21_CXT_DEPTH_GC02M1B_MIPI_RAW,
        N21_CXT_DEPTH_GC02M1B_MIPI_RAW_SensorInit},
#endif
//bug 530174,gaoyu1.wt,add,20200113,bring up depth gc02m1b
#if defined(N21_CXT_MICRO_GC2375H_MIPI_RAW)
	{N21_CXT_MICRO_GC2375H_SENSOR_ID,
	SENSOR_DRVNAME_N21_CXT_MICRO_GC2375H_MIPI_RAW,
	N21_CXT_MICRO_GC2375H_MIPI_RAW_SensorInit},
#endif
#if defined(N21_LHYX_DEPTH_BF2253_MIPI_RAW)
	{N21_LHYX_DEPTH_BF2253_SENSOR_ID,
	SENSOR_DRVNAME_N21_LHYX_DEPTH_BF2253_MIPI_RAW,
	N21_LHYX_DEPTH_BF2253_MIPI_RAW_SensorInit},
#endif
#if defined(N21_QUNH_MICRO_BF2253_MIPI_RAW)
	{N21_QUNH_MICRO_BF2253_SENSOR_ID,
	SENSOR_DRVNAME_N21_QUNH_MICRO_BF2253_MIPI_RAW,
	N21_QUNH_MICRO_BF2253_MIPI_RAW_SensorInit},
#endif
#if defined(N21_HLT_DEPTH_GC2375H_MIPI_RAW)
	{N21_HLT_DEPTH_GC2375H_SENSOR_ID,
	SENSOR_DRVNAME_N21_HLT_DEPTH_GC2375H_MIPI_RAW,
	N21_HLT_DEPTH_GC2375H_MIPI_RAW_SensorInit},
#endif
#if defined(N21_HLT_MICRO_GC2375H_MIPI_RAW)
	{N21_HLT_MICRO_GC2375H_SENSOR_ID,
	SENSOR_DRVNAME_N21_HLT_MICRO_GC2375H_MIPI_RAW,
	N21_HLT_MICRO_GC2375H_MIPI_RAW_SensorInit},
#endif
#if defined(N21_SHINE_WIDE_GC8034W_MIPI_RAW)
	{N21_SHINE_WIDE_GC8034W_SENSOR_ID,
	SENSOR_DRVNAME_N21_SHINE_WIDE_GC8034W_MIPI_RAW,
	N21_SHINE_WIDE_GC8034WMIPI_RAW_SensorInit},
#endif
#if defined(N21_TXD_WIDE_HI846_MIPI_RAW)
	{N21_TXD_WIDE_HI846_SENSOR_ID,
	SENSOR_DRVNAME_N21_TXD_WIDE_HI846_MIPI_RAW,
	N21_TXD_WIDE_HI846MIPI_RAW_SensorInit},
#endif
#if defined(N21_HLT_WIDE_GC8034W_MIPI_RAW)
	{N21_HLT_WIDE_GC8034W_SENSOR_ID,
	SENSOR_DRVNAME_N21_HLT_WIDE_GC8034W_MIPI_RAW,
	N21_HLT_WIDE_GC8034WMIPI_RAW_SensorInit},
#endif

	/*  ADD sensor driver before this line */
	{0, {0}, NULL}, /* end of list */
};
/* e_add new sensor driver here */

