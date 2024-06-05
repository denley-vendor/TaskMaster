#include "stdafx.h"
#include "LineApplication.h"

#include "MainFrm.h"

IMPLEMENT_DYNCREATE(MainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(MainFrame, CFrameWnd)
END_MESSAGE_MAP()

MainFrame::MainFrame()
{
}

MainFrame::~MainFrame()
{
}

BOOL MainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
    return CFrameWnd::PreCreateWindow(cs);
}
