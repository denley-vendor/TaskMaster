#include "GraphicLine.h"

GraphicLine::GraphicLine(const Line& aLine) : itsLine(aLine)
{
}

GraphicLine::~GraphicLine()
{
}

void GraphicLine::Draw(CDC& aDC) const
{
  CPen* currentPen = aDC.SelectObject(aDC.GetCurrentPen());
  aDC.MoveTo(itsLine.GetP1());
  aDC.LineTo(itsLine.GetP2());
  aDC.SelectObject(currentPen);
}
