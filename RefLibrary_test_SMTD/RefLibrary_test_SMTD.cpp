// RefLibrary_test_SMTD.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <locale.h>

#include "CalcFunc.h"
#include "DefineLocale.h"

#pragma comment(lib, "RefLibrary_SMTD.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	_tsetlocale(LC_ALL, LC_NAME_zh_CN_DEFAULT);

	int x = 1;
	int y = 2;
	int iResult = Calc_Add(x, y);

	_tprintf_s(_T("静态库调试版，不依赖支持库: %d + %d = %d\r\n"), x, y, iResult);

	getchar();

	return 0;
}

