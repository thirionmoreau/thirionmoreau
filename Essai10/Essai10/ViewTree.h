
#pragma once

/////////////////////////////////////////////////////////////////////////////
// Fen�tre de CViewTree

class CViewTree : public CTreeCtrl
{
// Construction
public:
	CViewTree();

// Substitutions
protected:
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);

// Impl�mentation
public:
	virtual ~CViewTree();

protected:
	DECLARE_MESSAGE_MAP()
};
