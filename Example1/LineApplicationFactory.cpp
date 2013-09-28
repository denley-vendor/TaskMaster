
// Dependencies -------------------------------------------------------
#include "LineApplicationFactory.h"
#include "GraphicLine.h"

// END Dependencies ---------------------------------------------------

LineApplicationFactory::LineApplicationFactory()
{}

LineApplicationFactory::~LineApplicationFactory()
{}

// make the GraphicLine used in Line Application
GraphicObject* LineApplicationFactory::MakeLine(const CPoint& p1,
												const CPoint& p2) const 
{
  return new GraphicLine(p1, p2);
}