
// Dependencies -------------------------------------------------------
#include "LineApplication.h"
#include "LineApplicationWindow.h"

// END Dependencies ---------------------------------------------------

LineApplication myApp;

LineApplication::LineApplication()
{}

LineApplication::~LineApplication()
{}

BOOL LineApplication::InitInstance ()
{
    m_pMainWnd = new LineApplicationWindow(&itsGraphicFactory);
    m_pMainWnd->ShowWindow (m_nCmdShow);
    m_pMainWnd->UpdateWindow ();
    return TRUE;
}

