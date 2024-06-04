#include "LineApplicationFactory.h"
#include "GraphicLine.h"

LineApplicationFactory::LineApplicationFactory()
{
}

LineApplicationFactory::~LineApplicationFactory()
{
}

GraphicObject* LineApplicationFactory::MakeLine(const CPoint& p1,
    const CPoint& p2) const 
{
  return new GraphicLine(p1, p2);
}
