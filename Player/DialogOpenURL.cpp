// DialogOpenURL.cpp : implementation file
//

#include "stdafx.h"
#include "Player.h"
#include "DialogOpenURL.h"
#include "afxdialogex.h"


// CDialogOpenURL dialog

IMPLEMENT_DYNAMIC(CDialogOpenURL, CDialog)

CDialogOpenURL::CDialogOpenURL(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DIALOG_OPEN_URL, pParent)
    , m_URL(_T(""))
{

}

CDialogOpenURL::~CDialogOpenURL()
{
}

void CDialogOpenURL::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_EDIT_URL, m_URL);
}


BEGIN_MESSAGE_MAP(CDialogOpenURL, CDialog)
END_MESSAGE_MAP()


// CDialogOpenURL message handlers