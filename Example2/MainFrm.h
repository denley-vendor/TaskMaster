#ifndef MainFrame_h
#define MainFrame_h

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
