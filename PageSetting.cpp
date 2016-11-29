// PageSetting.cpp : 实现文件
//

#include "stdafx.h"
#include "EleCharge.h"
#include "PageSetting.h"


// CPageSetting 对话框

IMPLEMENT_DYNAMIC(CPageSetting, CPropertyPage)

CPageSetting::CPageSetting()
	: CPropertyPage(CPageSetting::IDD)
{

}

CPageSetting::~CPageSetting()
{
}

void CPageSetting::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPageSetting, CPropertyPage)
END_MESSAGE_MAP()


// CPageSetting 消息处理程序
