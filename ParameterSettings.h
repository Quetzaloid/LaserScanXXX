#pragma once


// CParameterSettings �Ի���

class CParameterSettings : public CDialog
{
	DECLARE_DYNAMIC(CParameterSettings)

public:
	CParameterSettings(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CParameterSettings();

// �Ի�������
	enum { IDD = IDD_ParameterSettings };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	unsigned int m_LaserOnDelay;
	unsigned int m_LaserOffDelay;
	unsigned int m_JumpDelay;
	unsigned int m_MarkDelay;
	unsigned int m_PolygonDelay;
	double m_JumpSpeed;
	double m_MarkSpeed;
	afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	double m_CalibrationFactor_KSpeed;
	afx_msg void OnEnChangeJumpspeed();
	afx_msg void OnEnChangeMarkspeed();
};
