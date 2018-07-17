// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xdev_digits_classify.h"

extern XDev_digits_classify_Config XDev_digits_classify_ConfigTable[];

XDev_digits_classify_Config *XDev_digits_classify_LookupConfig(u16 DeviceId) {
	XDev_digits_classify_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XDEV_DIGITS_CLASSIFY_NUM_INSTANCES; Index++) {
		if (XDev_digits_classify_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XDev_digits_classify_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XDev_digits_classify_Initialize(XDev_digits_classify *InstancePtr, u16 DeviceId) {
	XDev_digits_classify_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XDev_digits_classify_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XDev_digits_classify_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

