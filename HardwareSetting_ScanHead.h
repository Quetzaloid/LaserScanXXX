#pragma once
#include "afxwin.h"
#include "Resource.h"


// CHardwareSetting_ScanHead �Ի���

class CHardwareSetting_ScanHead : public CDialog
{
	DECLARE_DYNAMIC(CHardwareSetting_ScanHead)

public:
	CHardwareSetting_ScanHead(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CHardwareSetting_ScanHead();

// �Ի�������
	enum { IDD = IDD_HardwareSettings_ScanHead };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	
	virtual BOOL OnInitDialog();
	CString ScanHead_bit3;
	CString ScanHead_bit4;
	CString ScanHead_bit6;
	CString ScanHead_bit7;
};
