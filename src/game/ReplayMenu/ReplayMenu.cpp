#include "ReplayMenu.hpp"
#include "memory.hpp"

ReplayMenu*& gReplayMenu = GET((ReplayMenu*)0, 0x008363EC);

//THUNK :  
void ReplayMenu::ServiceLoading(ReplayMenu* _this)
{
	call<void(ReplayMenu*)>(0x004C10B0)(_this);
}