
// Test0225View.cpp : CTest0225View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CTest0225View ����/����

CTest0225View::CTest0225View()
{
	// TODO: �ڴ˴���ӹ������
	ss = _T("��ã�");

}

CTest0225View::~CTest0225View()
{
}

BOOL CTest0225View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CTest0225View ����

void CTest0225View::OnDraw(CDC* pDC)
{
	CTest0225Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200, 200,pDoc->s);//����ָ��pDoc����ͼ���ڲ� ���� �ĵ��� ���ݳ�Աs
	pDC->TextOutW(500, 200, ss);//�ڿͻ�����ʾview�ڶ�����ַ���ss
}


// CTest0225View ���

#ifdef _DEBUG
void CTest0225View::AssertValid() const
{
	CView::AssertValid();
}

void CTest0225View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTest0225Doc* CTest0225View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTest0225Doc)));
	return (CTest0225Doc*)m_pDocument;
}
#endif //_DEBUG


// CTest0225View ��Ϣ�������


void CTest0225View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CTest0225Doc* pDoc = GetDocument();
	GetDC()->TextOut(300, 300, pDoc->s+ss);//�ͻ�����ʾ�����ַ�����ϵĽ��
	CView::OnLButtonDown(nFlags, point);
}
