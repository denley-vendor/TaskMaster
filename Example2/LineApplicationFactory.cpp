
// Dependencies -------------------------------------------------------
#include "LineApplicationFactory.h"
#include "GraphicLine.h"

// END Dependencies ---------------------------------------------------

LineApplicationFactory::LineApplicationFactory()
{}

LineApplicationFactory::~LineApplicationFactory()
{}

// make the GraphicLine used in Line Application
GraphicObject* LineApplicationFactory::MakeLine(const Line& line) const
        
{
  return new GraphicLine(line);
}

GraphicFactory* LineApplicationFactory::Clone() const
{
  return new LineApplicationFactory;
}