#pragma once


// CRectPro �Ի���

class CRectPro : public CDialog
{
	DECLARE_DYNAMIC(CRectPro)

public:
	CRectPro(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CRectPro();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	BOOL m_Fill;
};
