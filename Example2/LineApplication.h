// Interface Dependencies ---------------------------------------------
#ifndef LineApplicationApp_h
#define LineApplicationApp_h

#include "stdafx.h"
#include "resource.h"       // main symbols
// END Interface Dependencies -----------------------------------------

// --------------------------------------------------------------------
//
//  Name
//    LineApplicationApp
//
//  Description
//    This is the main application class.
//
//  Notes:
//  
// --------------------------------------------------------------------

class LineApplicationApp : public CWinApp
{
  public:
    LineApplicationApp();
    virtual ~LineApplicationApp();

    virtual BOOL InitInstance();

  private:
    DECLARE_MESSAGE_MAP()
};

#endif