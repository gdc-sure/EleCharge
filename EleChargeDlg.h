// EleChargeDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "PageSetting.h"

// CEleChargeDlg �Ի���
class CEleChargeDlg : public CDialog
{
// ����
public:
	CEleChargeDlg(CWnd* pParent = NULL);	// ��׼���캯��
    
	
// �Ի�������
	enum { IDD = IDD_PAGE_SHEET };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedEcOk();
	CTabCtrl m_TabCtrl;
	CPageSetting   m_PageSetting;
};
