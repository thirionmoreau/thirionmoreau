
// Essai10View.h : interface de la classe CEssai10View
//

#pragma once


class CEssai10View : public CView
{
protected: // cr�ation � partir de la s�rialisation uniquement
	CEssai10View();
	DECLARE_DYNCREATE(CEssai10View)

// Attributs
public:
	CEssai10Doc* GetDocument() const;

// Op�rations
public:

// Substitutions
public:
	virtual void OnDraw(CDC* pDC);  // substitu� pour dessiner cette vue
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Impl�mentation
public:
	virtual ~CEssai10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Fonctions g�n�r�es de la table des messages
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // version debug dans Essai10View.cpp
inline CEssai10Doc* CEssai10View::GetDocument() const
   { return reinterpret_cast<CEssai10Doc*>(m_pDocument); }
#endif

