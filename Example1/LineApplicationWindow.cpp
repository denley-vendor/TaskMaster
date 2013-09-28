// Dependencies -------------------------------------------------------
#include "LineApplicationWindow.h"
#include "GraphicObject.h"
#include "GraphicFactory.h"

// END Dependencies ---------------------------------------------------

///////////////////////////////////////////////////////////////////////
// LineApplicationWindow message map 
///////////////////////////////////////////////////////////////////////
BEGIN_MESSAGE_MAP (LineApplicationWindow, CFrameWnd)
  ON_WM_PAINT()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP ()


///////////////////////////////////////////////////////////////////////
// LineApplicationWindow member function
///////////////////////////////////////////////////////////////////////
LineApplicationWindow::LineApplicationWindow(GraphicFactory* aFactory)
: itsGraphicFactory(aFactory)
{
	Create (NULL, "Line Application");

	itsBluePen = new CPen(0,1,RGB(255,255,0));
		// when the pen is drawn in XOR mode it will be blue
}

LineApplicationWindow::~LineApplicationWindow()
{
	// delete the object stored in the vector
	std::vector<GraphicObject*, std::allocator<GraphicObject*> >::iterator index;
	for(index = itsObjects.begin(); index != itsObjects.end(); ++index)
	{
		GraphicObject* anObject = *index;
		delete anObject;
	}

	delete itsBluePen;
}

void LineApplicationWindow::OnPaint()
{
	CClientDC dc(this);

	std::vector<GraphicObject*, std::allocator<GraphicObject*> >::iterator index;
	for(index = itsObjects.begin(); index != itsObjects.end(); ++index)
	{
		GraphicObject* anObject = *index;
		anObject->Draw(dc);
	}
}

void LineApplicationWindow::OnLButtonUp(UINT nFlags, CPoint point)
{
  if(GetCapture() == this)
  {
    itsSecondPoint = point;

	CClientDC dc(this);

	GraphicObject* anObject = 
          itsGraphicFactory->MakeLine(itsFirstPoint,itsSecondPoint);

    anObject->Draw(dc);
	itsObjects.push_back(anObject);

	ReleaseCapture();
  }

  return;
}


void LineApplicationWindow::OnLButtonDown(UINT nFlags, CPoint point)
{
  SetCapture();
  itsFirstPoint = itsSecondPoint = point;
}

void LineApplicationWindow::OnMouseMove(UINT nFlags, CPoint point)
{
	if(GetCapture() == this)
	{
		CClientDC dc(this);

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

	return;
}
