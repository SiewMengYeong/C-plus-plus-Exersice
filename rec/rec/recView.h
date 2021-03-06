
// recView.h : interface of the CrecView class
//

#pragma once


class CrecView : public CView
{
protected: // create from serialization only
	CrecView();
	DECLARE_DYNCREATE(CrecView)

// Attributes
public:
	CrecDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CrecView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in recView.cpp
inline CrecDoc* CrecView::GetDocument() const
   { return reinterpret_cast<CrecDoc*>(m_pDocument); }
#endif

