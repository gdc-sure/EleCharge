// EleChargeDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "EleCharge.h"
#include "EleChargeDlg.h"
#include "PageSetting.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEleChargeDlg 对话框




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


// CEleChargeDlg 消息处理程序

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

	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CEleChargeDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CEleChargeDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CEleChargeDlg::OnBnClickedEcOk()
{
	// TODO: 在此添加控件通知处理程序代码
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