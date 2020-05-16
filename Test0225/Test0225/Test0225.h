
// Test0225.h : Test0225 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CTest0225App:
// 有关此类的实现，请参阅 Test0225.cpp
//

class CTest0225App : public CWinApp
{
public:
	CTest0225App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTest0225App theApp;
