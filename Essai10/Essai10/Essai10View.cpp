
// Essai10View.cpp : implémentation de la classe CEssai10View
//

#include "stdafx.h"
// SHARED_HANDLERS peuvent être définis dans les gestionnaires d'aperçu, de miniature
// et de recherche d'implémentation de projet ATL et permettent la partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "Essai10.h"
#endif

#include "Essai10Doc.h"
#include "Essai10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEssai10View

IMPLEMENT_DYNCREATE(CEssai10View, CView)

BEGIN_MESSAGE_MAP(CEssai10View, CView)
	// Commandes d'impression standard
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CEssai10View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// construction ou destruction de CEssai10View

CEssai10View::CEssai10View()
{
	// TODO: ajoutez ici du code de construction

}

CEssai10View::~CEssai10View()
{
}

BOOL CEssai10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: changez ici la classe ou les styles Window en modifiant
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// dessin de CEssai10View

void CEssai10View::OnDraw(CDC* /*pDC*/)
{
	CEssai10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ajoutez ici le code de dessin pour les données natives
}


// impression de CEssai10View


void CEssai10View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CEssai10View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// préparation par défaut
	return DoPreparePrinting(pInfo);
}

void CEssai10View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ajoutez une initialisation supplémentaire avant l'impression
}

void CEssai10View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ajoutez un nettoyage après l'impression
}

void CEssai10View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CEssai10View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// diagnostics pour CEssai10View

#ifdef _DEBUG
void CEssai10View::AssertValid() const
{
	CView::AssertValid();
}

void CEssai10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEssai10Doc* CEssai10View::GetDocument() const // la version non Debug est inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEssai10Doc)));
	return (CEssai10Doc*)m_pDocument;
}
#endif //_DEBUG


// gestionnaires de messages pour CEssai10View
