#pragma once

//
//  module.hpp
//
//  Created by ChiLaX on 23/5/17.
//  Copyright � 2017 ChiLaXSoft. All rights reserved.
//

#include "process.hpp"

class Module
{
public:
	Module(Process* process, WCHAR* moduleName);

	boolean AcquiredBytes();
	DWORD GetOffsetAtSignature(BYTE* signature, char* mask, DWORD start);
	DWORD BaseAddress();
private:
	Process* process;
	WCHAR* moduleName;
	DWORD baseAddress;
	DWORD size;
	BYTE* bytes;

	boolean MaskCheck(int nOffset, BYTE* btPattern, const char * strMask, int sigLength);
	DWORD FirstOffsetOfSignature(BYTE* pSignature, const char * pMask, int sigLength);
};