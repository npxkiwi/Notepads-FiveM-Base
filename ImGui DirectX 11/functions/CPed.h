#pragma once
#include <string>
#include <vector>

class CPed
{
public:
	void SetHP(int value) {
		*(float*)(this + 0x280) = value;
	}
	void SetArmor(int value)
	{
		*(float*)(this + 0x1530) = value;
	}
};

class CWorld
{
public:
	CPed* LocalPlayer()
	{
		if (!this) return 0;
		return (CPed*)(*(uintptr_t*)(this + 0x8));
	}
};