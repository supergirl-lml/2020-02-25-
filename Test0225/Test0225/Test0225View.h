
// Test0225View.h : CTest0225View 类的接口
//

#pragma once


class CTest0225View : public CView
{
protected: // 仅从序列化创建
	CTest0225View();
	DECLARE_DYNCREATE(CTest0225View)

// 特性
public:
	CTest0225Doc* GetDocument() const;

// 操作
public:
	CString ss;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CTest0225View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Test0225View.cpp 中的调试版本
inline CTest0225Doc* CTest0225View::GetDocument() const
   { return reinterpret_cast<CTest0225Doc*>(m_pDocument); }
#endif

