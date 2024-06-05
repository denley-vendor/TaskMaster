#ifndef LineApplicationApp_h
#define LineApplicationApp_h

#include "stdafx.h"
#include "resource.h"       

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
