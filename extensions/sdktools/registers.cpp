#include "registers.h"

void ValveRegInfo::Reset()
{
	has_xmm = false;
	has_xmm0 = false;
	has_xmm1 = false;
	has_xmm2 = false;
	has_xmm3 = false;
	has_xmm4 = false;
	has_xmm5 = false;
	has_xmm6 = false;
	has_xmm7 = false;
}

bool ValveRegInfo::Add(SDKRegister reg)
{
	switch (reg)
	{
	default:
		return false;
	case SDKReg_XMM0:
		has_xmm = true;
		has_xmm0 = true;
		break;
	case SDKReg_XMM1:
		has_xmm = true;
		has_xmm1 = true;
		break;
	case SDKReg_XMM2:
		has_xmm = true;
		has_xmm2 = true;
		break;
	case SDKReg_XMM3:
		has_xmm = true;
		has_xmm3 = true;
		break;
	case SDKReg_XMM4:
		has_xmm = true;
		has_xmm4 = true;
		break;
	case SDKReg_XMM5:
		has_xmm = true;
		has_xmm5 = true;
		break;
	case SDKReg_XMM6:
		has_xmm = true;
		has_xmm6 = true;
		break;
	case SDKReg_XMM7:
		has_xmm = true;
		has_xmm7 = true;
		break;
	}

	return true;
}
