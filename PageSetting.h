#pragma once


// CPageSetting �Ի���

class CPageSetting : public CPropertyPage
{
	DECLARE_DYNAMIC(CPageSetting)

public:
	CPageSetting();
	virtual ~CPageSetting();

// �Ի�������
	enum { IDD = IDD_PAGE_SETTING };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
