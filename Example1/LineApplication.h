#ifndef LineApplication_h
#define LineApplication_h

#include <afxwin.h>
#include "LineApplicationFactory.h"

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
