// Dependencies ------------------------------------------------------
#include "stdafx.h"
#include "LineTaskImplementation.h"

#include "DocumentInterface.h"
#include "Line.h"
#include "GraphicFactory.h"

extern GraphicFactory* GgraphicFactoryProto;
// END Dependencies --------------------------------------------------

LineTaskImplementation::LineTaskImplementation(CView* theView,
											   DocumentInterface* theDocument)
: itsView(theView)
, itsDocument(theDocument)
, itsGraphicFactory(GgraphicFactoryProto->Clone())
{
  itsBluePen = new CPen(0,1,RGB(255,255,0));
    // when the pen is drawn in XOR mode it will be blue
}

LineTaskImplementation::~LineTaskImplementation()
{
  delete itsGraphicFactory;
  delete itsBluePen;
}

void LineTaskImplementation::Start()
{
  Do();
}


void LineTaskImplementation::LeftMouseUp(UINT nFlags, 
									     const CPoint& point)
{
  itsTemporaryPoint = point;
  MouseUp();
}

void LineTaskImplementation::LeftMouseDown(UINT nFlags, 
										   const CPoint& point)
{
  itsTemporaryPoint = point;
  MouseDown();
}

void LineTaskImplementation::MouseMove(UINT nFlags, 
									   const CPoint& point)
{
  itsTemporaryPoint = point;
  MovePoint();
}


void LineTaskImplementation::AddLine()
{
  if(itsView->GetCapture() == itsView)
  {
    itsSecondPoint = itsTemporaryPoint;
	
	// release the mouse
	ReleaseCapture();

	Line* newLine = new Line(itsFirstPoint, itsSecondPoint);
	itsDocument->AddLine(newLine);

	itsDocument->UpdateViews(NULL, 0, newLine);
  }

  return;
}

void LineTaskImplementation::RecordFirstPoint()
{
  itsView->SetCapture();
  itsFirstPoint = itsSecondPoint = itsTemporaryPoint;
}

void LineTaskImplementation::TrackLine()
{
  if(itsView->GetCapture() == itsView)
  {
    CClientDC dc(itsView);
	itsView->OnPrepareDC(&dc);

	// save the current dc parameters that we are changing
	int previousROP = dc.SetROP2(R2_XORPEN);
	CPen* currentPen = dc.SelectObject(itsBluePen);

	// draw the previous line
	dc.MoveTo(itsFirstPoint);
	dc.LineTo(itsSecondPoint);

	// draw the new line
	dc.MoveTo(itsFirstPoint);
	dc.LineTo(itsTemporaryPoint);
	itsSecondPoint = itsTemporaryPoint;

	// reset previous parameters
	dc.SetROP2(previousROP);
	dc.SelectObject(currentPen);
  }

  return;
}

void LineTaskImplementation::FSMError(const char* t, 
									  const char* s)
{}

void LineTaskImplementation::InitTask()
{}
 

