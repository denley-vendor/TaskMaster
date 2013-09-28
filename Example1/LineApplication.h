// Interface Dependencies ---------------------------------------------
#ifndef LineApplication_h
#define LineApplication_h

#include <afxwin.h>
#include "LineApplicationFactory.h"
// END Interface Dependnecies -----------------------------------------

// --------------------------------------------------------------------
//
//  Name
//    LineApplication
//
//  Description
//    Application class.
//
//  Notes:
//
// --------------------------------------------------------------------

class LineApplication : public CWinApp
{
  public:
    LineApplication();
    virtual ~LineApplication();

    virtual BOOL InitInstance ();
  private:
	LineApplicationFactory itsGraphicFactory;
};

#endif