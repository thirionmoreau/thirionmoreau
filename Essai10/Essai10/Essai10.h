
// Essai10.h�: fichier d'en-t�te principal pour l'application Essai10
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"       // symboles principaux


// CEssai10App:
// Consultez Essai10.cpp pour l'impl�mentation de cette classe
//

class CEssai10App : public CWinAppEx
{
public:
	CEssai10App();


// Substitutions
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Impl�mentation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEssai10App theApp;
