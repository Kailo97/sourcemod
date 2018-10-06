#ifndef _INCLUDE_SOURCEMOD_REGISTERS_H_
#define _INCLUDE_SOURCEMOD_REGISTERS_H_

enum SDKRegister
{
	SDKReg_EDX,

	SDKReg_XMM0,
	SDKReg_XMM1,
	SDKReg_XMM2,
	SDKReg_XMM3,
	SDKReg_XMM4,
	SDKReg_XMM5,
	SDKReg_XMM6,
	SDKReg_XMM7,

	SDKReg_ST
};

struct ValveRegValues
{
	float xmm0;
	float xmm1;
	float xmm2;
	float xmm3;
	float xmm4;
	float xmm5;
	float xmm6;
	float xmm7;
};

struct ValveRegInfo
{
	bool has_xmm;
	bool has_xmm0;
	bool has_xmm1;
	bool has_xmm2;
	bool has_xmm3;
	bool has_xmm4;
	bool has_xmm5;
	bool has_xmm6;
	bool has_xmm7;

	void Reset();
	bool Add(SDKRegister reg);
};

#endif //_INCLUDE_SOURCEMOD_REGISTERS_H_
