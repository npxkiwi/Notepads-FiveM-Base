#include "Self.h"
#include "../CPed.h"
#include <Windows.h>
#include <string>
void* addr = (void*)((uintptr_t)GetModuleHandle(NULL) + 0x26684D8);
CWorld* World = (CWorld*)*(uint64_t*)(addr);
void Self::SetHealth(int value) {
    World->LocalPlayer()->SetHP(value);
}

void Self::SetArmor(int value) {
    World->LocalPlayer()->SetArmor(value);
}


