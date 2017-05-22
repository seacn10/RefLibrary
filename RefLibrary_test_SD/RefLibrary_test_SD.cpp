// RefLibrary_test_SD.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
#include <locale.h>

#include "CalcFunc.h"
#include "DefineLocale.h"

#ifdef _DEBUG

#pragma comment(lib, "RefLibrarySD.lib")

#else

#pragma comment(lib, "RefLibraryS.lib")

#endif

#ifdef _DEBUG

	#define REFLIBRARY_DLL_NAME		L"RefLibrarySD.dll"

#else

	#define REFLIBRARY_DLL_NAME		L"RefLibraryS.dll"

#endif

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 1;
	int y = 2;
	int iResult = Calc_Add(x, y);

	_tprintf_s(L"��̬����԰棬����֧�ֿ⣬��ʽ���ӣ�%d + %d = %d\r\n", x, y, iResult);

	HMODULE hDLL = LoadLibrary(REFLIBRARY_DLL_NAME);
	if (hDLL == NULL)
	{
		return 1;
	}

	x = 2;
	y = 4;

	typedef int(__cdecl *FUNC_CALC_ADD)(int, int);
	FUNC_CALC_ADD func = (FUNC_CALC_ADD)GetProcAddress(hDLL, "Calc_Add");
	iResult = func(x, y);
	_tprintf_s(L"��̬����԰棬����֧�ֿ⣬��ʽ���ӣ�%d + %d = %d\r\n", x, y, iResult);
	return 0;
}

