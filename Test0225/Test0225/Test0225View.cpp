
// Test0225View.cpp : CTest0225View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Test0225.h"
#endif

#include "Test0225Doc.h"
#include "Test0225View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTest0225View

IMPLEMENT_DYNCREATE(CTest0225View, CView)

BEGIN_MESSAGE_MAP(CTest0225View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CTest0225View 构造/析构

CTest0225View::CTest0225View()
{
	// TODO: 在此处添加构造代码
	ss = _T("你好！");

}

CTest0225View::~CTest0225View()
{
}

BOOL CTest0225View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CTest0225View 绘制

void CTest0225View::OnDraw(CDC* pDC)
{
	CTest0225Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->TextOutW(200, 200,pDoc->s);//利用指针pDoc在视图类内部 访问 文档类 数据成员s
	pDC->TextOutW(500, 200, ss);//在客户区显示view内定义的字符串ss
}


// CTest0225View 诊断

#ifdef _DEBUG
void CTest0225View::AssertValid() const
{
	CView::AssertValid();
}

void CTest0225View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTest0225Doc* CTest0225View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest0225Doc)));
	return (CTest0225Doc*)m_pDocument;
}
#endif //_DEBUG


// CTest0225View 消息处理程序


void CTest0225View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CTest0225Doc* pDoc = GetDocument();
	GetDC()->TextOut(300, 300, pDoc->s+ss);//客户区显示两个字符串结合的结果
	CView::OnLButtonDown(nFlags, point);
}
