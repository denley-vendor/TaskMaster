// Interface Dependencies ---------------------------------------------
#ifndef LineApplicationWindow_h
#define LineApplicationWindow_h

#include <afxwin.h>
#include <vector>
#include <xmemory>
#include "GraphicObject.h"

  // the compiler seems to want this defined even though
  // I believe it could be forward referenced

class GraphicFactory;
// END Interface Dependnecies -----------------------------------------

// --------------------------------------------------------------------
//
//	Name:
//	  LineApplicationWindow
//
//  Description:
//    This is the window for the LineApplication.  It controls
//    the mouse events as well as the painting of the resulting
//    objects that are drawn in the window.
//
//  Notes:
//
//
// -------------------------------------------------------------------

class LineApplicationWindow : public CFrameWnd
{
  public:
    LineApplicationWindow(GraphicFactory* aFactory);
	virtual ~LineApplicationWindow();

  private:
	CPoint          itsSecondPoint;
	CPoint          itsFirstPoint;
	GraphicFactory* itsGraphicFactory;

	std::vector<GraphicObject*, std::allocator<GraphicObject*> > itsObjects; 

	CPen* itsBluePen;

	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnPaint();

    DECLARE_MESSAGE_MAP()
};

#endif