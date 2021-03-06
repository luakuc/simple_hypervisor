#pragma once
#include "types.h"
bool CheckVMXConditions(void);
bool InitVMX(void);
void InitGuestRegisterState(void);
void InitGuestNonRegisterState(void);
void InitHostStateArea(void);
bool InitExecutionControlFields(void);
void InitEPT(void);
bool InitVMExitControl(void);
bool InitVMEntryControl(void);