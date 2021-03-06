
// ChatGameDlg.h: 헤더 파일
//

#pragma once

#define STATIC_CONTROL_MAX		5

// CChatGameDlg 대화 상자
class CChatGameDlg : public CDialogEx
{
// 생성입니다.
public:
	CChatGameDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHATGAME_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	CStatic m_StaticCtrl[STATIC_CONTROL_MAX];
	CString m_strStatic[STATIC_CONTROL_MAX];

	CString m_strEditChat;


	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnCheck();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
