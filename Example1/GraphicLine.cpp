// Dependencies --------------------------------------------------
#include "GraphicLine.h"

// END Dependencies ----------------------------------------------


GraphicLine::GraphicLine(const CPoint& p1, const CPoint& p2)
: itsP1(p1)
, itsP2(p2)
{}

GraphicLine::~GraphicLine()
{}

void GraphicLine::Draw(CClientDC& aDC) const
{
  CPen* currentPen = aDC.SelectObject(aDC.GetCurrentPen());
  aDC.MoveTo(itsP1);
  aDC.LineTo(itsP2);
  aDC.SelectObject(currentPen);
}