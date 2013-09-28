// Dependencies ------------------------------------------------------
#include "stdafx.h"
#include "LineApplication.h"

#include "LineApplicationDoc.h"
#include "LineApplicationView.h"
#include "Line.h"
#include "GraphicFactory.h"
#include "Task.h"
#include "TaskFactory.h"

extern GraphicFactory* GgraphicFactoryProto;
extern TaskFactory* GtaskFactoryProto;
// END Dependencies --------------------------------------------------


IMPLEMENT_DYNCREATE(LineApplicationView, CView)

BEGIN_MESSAGE_MAP(LineApplicationView, CView)
  ON_WM_LBUTTONDOWN()
  ON_WM_LBUTTONUP()
  ON_WM_MOUSEMOVE()
  ON_COMMAND(ID_PALETTE_LINE, StartLineTask)
END_MESSAGE_MAP()


LineApplicationView::LineApplicationView()
: itsGraphicFactory(GgraphicFactoryProto->Clone())
, itsTaskFactory(GtaskFactoryProto->Clone())
, itsTask(0)
{
}

LineApplicationView::~LineApplicationView()
{
  DeleteObjects();
  delete itsGraphicFactory;
  delete itsTask;
}

void LineApplicationView::SetTask(Task* task)
{
  if(itsTask)
    delete itsTask;

  itsTask = task;
  if(itsTask)
    itsTask->Start();
}

void LineApplicationView::DeleteObjects()
{
  // delete the object stored in the vector
  while(itsObjects.size() > 0)
  {
	GraphicObject* anObject = itsObjects.front();
    itsObjects.erase(itsObjects.begin());
	delete anObject;
  }
}


// -------------------------------------------------------------------
//
//  Name
//    void LineApplicationView::OnDraw(CDC* pDC)
//
//  Description
//    This is where the items are drawn upon a paint event.
//
//  Notes:
//  
// -------------------------------------------------------------------  
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
  if(itsTask)
    itsTask->LeftMouseUp(nFlags, point);
  return;
}

void LineApplicationView::OnLButtonDown(UINT nFlags, CPoint point)
{
  if(itsTask)
    itsTask->LeftMouseDown(nFlags, point);
  return;
}

void LineApplicationView::OnMouseMove(UINT nFlags, CPoint point)
{
  if(itsTask)
    itsTask->MouseMove(nFlags, point);
  return;
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

  return;
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

void LineApplicationView::StartLineTask()
{
  // construct a line task
  LineApplicationDoc* document = GetDocument();
  Task* lineTask = itsTaskFactory->MakeLineTask(this, document);
  SetTask(lineTask);
}

