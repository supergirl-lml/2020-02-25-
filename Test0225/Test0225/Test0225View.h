
// Test0225View.h : CTest0225View ��Ľӿ�
//

#pragma once


class CTest0225View : public CView
{
protected: // �������л�����
	CTest0225View();
	DECLARE_DYNCREATE(CTest0225View)

// ����
public:
	CTest0225Doc* GetDocument() const;

// ����
public:
	CString ss;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CTest0225View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Test0225View.cpp �еĵ��԰汾
inline CTest0225Doc* CTest0225View::GetDocument() const
   { return reinterpret_cast<CTest0225Doc*>(m_pDocument); }
#endif

