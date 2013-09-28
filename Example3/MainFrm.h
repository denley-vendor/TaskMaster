// Interface Dependencies --------------------------------------------
#ifndef MainFrame_h
#define MainFrame_h

// END Interface Dependencies ----------------------------------------

// -------------------------------------------------------------------
//
//  Name
//    MainFrame
//
//  Description
//    The Main Frame window
//
//  Notes:
//    Create from serialization only.
//
// -------------------------------------------------------------------
class MainFrame : public CFrameWnd
{
  public:
    virtual ~MainFrame();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

  protected:
	MainFrame();

  private:
	DECLARE_DYNCREATE(MainFrame)
	DECLARE_MESSAGE_MAP() 
};

#endif