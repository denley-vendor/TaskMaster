// Interface Dependencies -------------------------------------------
#include "stdafx.h"
#include <vector>
#include <xmemory>
#include "GraphicObject.h"

class GraphicFactory;
// END Interface Dependencies ---------------------------------------

// ------------------------------------------------------------------
//
//  Name
//    LineApplicationView
//
//  Description
//    Graphical view of the lines that are drawn by the application
//
//  Notes:
//    Create from serialization only
//
// ------------------------------------------------------------------

class LineApplicationView : public CView
{
  public:
    LineApplicationView();
    virtual ~LineApplicationView();

    LineApplicationDoc* GetDocument();

  private:
    std::vector<GraphicObject*, std::allocator<GraphicObject*> > itsObjects;

    CPen*           itsBluePen;
    CPoint          itsFirstPoint;
    CPoint          itsSecondPoint;
    GraphicFactory* itsGraphicFactory;

    virtual void OnInitialUpdate();
    virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);
    virtual void OnDraw(CDC* aDC);
    afx_msg void OnLButtonDown(UINT, CPoint);
    afx_msg void OnLButtonUp(UINT, CPoint);
    afx_msg void OnMouseMove(UINT, CPoint);
    virtual void DeleteObjects();

    DECLARE_DYNCREATE(LineApplicationView)
    DECLARE_MESSAGE_MAP()
};