// PageSetting.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EleCharge.h"
#include "PageSetting.h"


// CPageSetting �Ի���

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


// CPageSetting ��Ϣ�������
