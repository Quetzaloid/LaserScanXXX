// Draw_TaskList.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LaserScan.h"
#include "Draw_TaskList.h"


// CDraw_TaskList �Ի���

IMPLEMENT_DYNAMIC(CDraw_TaskList, CDialog)

CDraw_TaskList::CDraw_TaskList(CWnd* pParent /*=NULL*/)
	: CDialog(CDraw_TaskList::IDD, pParent)
{

}

CDraw_TaskList::~CDraw_TaskList()
{
}

void CDraw_TaskList::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_Draw_Tree, n_tree);
}


BEGIN_MESSAGE_MAP(CDraw_TaskList, CDialog)

END_MESSAGE_MAP()


// CDraw_TaskList ��Ϣ�������