#pragma once


// CPageSetting 对话框

class CPageSetting : public CPropertyPage
{
	DECLARE_DYNAMIC(CPageSetting)

public:
	CPageSetting();
	virtual ~CPageSetting();

// 对话框数据
	enum { IDD = IDD_PAGE_SETTING };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
