#include "stdafx.h"
#include "LineApplication.h"

#include "LineApplicationDoc.h"
#include "LineApplicationView.h"
#include "Line.h"
#include "GraphicFactory.h"

extern GraphicFactory* GgraphicFactoryProto;

IMPLEMENT_DYNCREATE(LineApplicationView, CView)

BEGIN_MESSAGE_MAP(LineApplicationView, CView)
  ON_WM_LBUTTONDOWN()
  ON_WM_LBUTTONUP()
  ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

LineApplicationView::LineApplicationView()
  : itsGraphicFactory(GgraphicFactoryProto->Clone())
{
  itsBluePen = new CPen(0,1,RGB(255,255,0));
}

LineApplicationView::~LineApplicationView()
{
  DeleteObjects();
  delete itsGraphicFactory;
  delete itsBluePen;
}

void LineApplicationView::DeleteObjects()
{
  while(itsObjects.size() > 0)
  {
    GraphicObject* anObject = itsObjects.front();
    itsObjects.erase(itsObjects.begin());
    delete anObject;
  }
}

void LineApplicationView::OnDraw(CDC* aDC)
{
  std::vector<GraphicObject*, std::allocator<GraphicObject*> >::iterator index;
  for(index = itsObjects.begin(); index != itsObjects.end(); ++index)
  {
    GraphicObject* anObject = *index;
    anObject->Draw(*aDC);
  }
}

LineApplicationDoc* LineApplicationView::GetDocument() 
{
  return static_cast<LineApplicationDoc*> (m_pDocument);
}

void LineApplicationView::OnLButtonUp(UINT nFlags, CPoint point)
{
  if(GetCapture() == this)
  {
    itsSecondPoint = point;
    ReleaseCapture();

    LineApplicationDoc* document = GetDocument();
    Line* newLine = new Line(itsFirstPoint, itsSecondPoint);
    document->AddLine(newLine);
  }
}

void LineApplicationView::OnLButtonDown(UINT nFlags, CPoint point)
{
  SetCapture();
  itsFirstPoint = itsSecondPoint = point;
}

void LineApplicationView::OnMouseMove(UINT nFlags, CPoint point)
{
  if(GetCapture() == this)
  {
    CClientDC dc(this);
    OnPrepareDC(&dc);

    // save the current dc parameters that we are changing
    int previousROP = dc.SetROP2(R2_XORPEN);
    CPen* currentPen = dc.SelectObject(itsBluePen);

    // draw the previous line
    dc.MoveTo(itsFirstPoint);
    dc.LineTo(itsSecondPoint);

    // draw the new line
    dc.MoveTo(itsFirstPoint);
    dc.LineTo(point);
    itsSecondPoint = point;

    // reset previous parameters
    dc.SetROP2(previousROP);
    dc.SelectObject(currentPen);
  }
}

void LineApplicationView::OnUpdate(CView* sender, LPARAM lHint, 
                                   CObject* pHint)
{
  Line* aLine = dynamic_cast<Line*>(pHint);
  if(aLine)
  {
    GraphicObject* anObject = itsGraphicFactory->MakeLine(*aLine);
    itsObjects.push_back(anObject);

    CClientDC dc(this);
    OnPrepareDC(&dc);
    anObject->Draw(dc);
  }
  else
  {
    CView::OnUpdate(sender, lHint, pHint);
  }
}

void LineApplicationView::OnInitialUpdate()
{
  // first delete any objects that may have been left 
  // over from a previous document
  DeleteObjects();

  // load up any existing lines
  LineApplicationDoc* document = GetDocument();

  std::vector<Line*, std::allocator<Line*> > newLines;
  document->GetLines(newLines);

  std::vector<Line*, std::allocator<Line*> >::iterator index;
  for(index = newLines.begin(); index != newLines.end(); ++index)
  {
    Line* aLine = *index;
    GraphicObject* anObject = itsGraphicFactory->MakeLine(*aLine);
    itsObjects.push_back(anObject);
  }

  CView::OnInitialUpdate();
}
