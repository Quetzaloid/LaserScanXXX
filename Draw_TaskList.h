#pragma once
#include "afxcmn.h"


// CDraw_TaskList �Ի���

class CDraw_TaskList : public CDialog
{
	DECLARE_DYNAMIC(CDraw_TaskList)

public:
	CDraw_TaskList(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDraw_TaskList();

// �Ի�������
	enum { IDD = IDD_Draw_TaskList };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CTreeCtrl n_tree;
};
