#include "MemoryPool.hpp"
#include "memory.hpp"

MemoryPool*& MemoryPoolMem = GET((MemoryPool*)0, 0x00828218);
MemoryPool*& MemoryPools = GET((MemoryPool*)0, 0x00828154);

//Uses this
//THUNK : 0x004402C0
void MemoryPool::Init(MemoryPool* _this, void* a2, int a3, const char* a4)
{
    call<void(MemoryPool*, void*, int, const char*)>(0x004402C0)(_this, a2, a3, a4);
}