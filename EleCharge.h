// EleCharge.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CEleChargeApp:
// �йش����ʵ�֣������ EleCharge.cpp
//

class CEleChargeApp : public CWinApp
{
public:
	CEleChargeApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CEleChargeApp theApp;