// EleChargeDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EleCharge.h"
#include "EleChargeDlg.h"
#include "PageSetting.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEleChargeDlg �Ի���




CEleChargeDlg::CEleChargeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEleChargeDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEleChargeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TAB1, m_TabCtrl);
}

BEGIN_MESSAGE_MAP(CEleChargeDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_EC_OK, &CEleChargeDlg::OnBnClickedEcOk)
END_MESSAGE_MAP()


// CEleChargeDlg ��Ϣ�������

BOOL CEleChargeDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
    RECT rc;
	RECT rc1;
	m_TabCtrl.InsertItem(0,TEXT("Setting"));
	GetDlgItem(IDC_TAB1)->GetClientRect(&rc1);
	m_TabCtrl.GetItemRect(0,&rc);
	rc1.top =rc.bottom  ;
	m_PageSetting.Create(IDD_PAGE_SETTING,GetDlgItem(IDC_TAB1));
	m_PageSetting.MoveWindow (&rc1);
	m_PageSetting.ShowWindow(SW_SHOW);

	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CEleChargeDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CEleChargeDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CEleChargeDlg::OnBnClickedEcOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}













/*
//Constructor for the class derived from CTabCtrl
MyTabCtrl::MyTabCtrl()
{
m_DialogID[0] =IDD_DIALOG1;
m_DialogID[1] =IDD_DIALOG2;

m_Dialog[0] = new MyDlg1();
m_Dialog[1] = new MyDlg2();

m_nPageCount = 2;

}

//This function creates the Dialog boxes once
void MyTabCtrl::InitDialogs()
{
m_Dialog[0]->Create(m_DialogID[0],GetParent());
m_Dialog[1]->Create(m_DialogID[1],GetParent());
}

//Selection change event for the class derived from CTabCtrl
void MyTabCtrl::OnSelchange(NMHDR* pNMHDR, LRESULT* pResult)
{
// TODO: Add your control notification handler code here
ActivateTabDialogs();
*pResult = 0;
}

void MyTabCtrl::ActivateTabDialogs()
{
int nSel = GetCurSel();
if(m_Dialog[nSel]->m_hWnd)
m_Dialog[nSel]->ShowWindow(SW_HIDE);

CRect l_rectClient;
CRect l_rectWnd;

GetClientRect(l_rectClient);
AdjustRect(FALSE,l_rectClient);
GetWindowRect(l_rectWnd);
GetParent()->ScreenToClient(l_rectWnd);
l_rectClient.OffsetRect(l_rectWnd.left,l_rectWnd.top);
for(int nCount=0; nCount < m_nPageCount; nCount++){
m_Dialog[nCount]->SetWindowPos(&wndTop, l_rectClient.left, l_rectClient.top, l_rectClient.Width(), l_rectClient.Height(), SWP_HIDEWINDOW);
}
m_Dialog[nSel]->SetWindowPos(&wndTop, l_rectClient.left, l_rectClient.top, l_rectClient.Width(), l_rectClient.Height(), SWP_SHOWWINDOW);

m_Dialog[nSel]->ShowWindow(SW_SHOW);

}
*/