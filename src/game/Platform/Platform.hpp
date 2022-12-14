#pragma once

extern int& PlatformSkipDRM;
extern int& dword_00800B98;
extern int& dword_008284E4;
extern float& flt_00828028;
extern char& a_char;

struct bFile;

struct bList
{
	void* next;
	void* prev;
};


int bFileExists(char* Str);
void bFree(char* a1);
void bPListInit(int expected_nodes);
void bMemoryInit();
int bStrCmp(char* str1, char* str2);
bFile* bOpen(char* Str, int a2);
int bInitDisculatorDriver(char* Str, char* a2);
std::uint32_t bStringHash(const char* string);
void bClose(bFile* file, char a2);
LONGLONG bGetTicker();
double GetDebugRealTime();

void InitPlatform();
bool PlatformCDCheckBinDat(bool a1);
bool PlatformCDCheck();
bool PlatformDRM();
bool PlatformIsProcessRunning(char* exe, int count);
void PlatformPresent();