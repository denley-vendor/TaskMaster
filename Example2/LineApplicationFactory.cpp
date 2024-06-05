#include "LineApplicationFactory.h"
#include "GraphicLine.h"

LineApplicationFactory::LineApplicationFactory()
{
}

LineApplicationFactory::~LineApplicationFactory()
{
}

GraphicObject* LineApplicationFactory::MakeLine(const Line& line) const
{
  return new GraphicLine(line);
}

GraphicFactory* LineApplicationFactory::Clone() const
{
  return new LineApplicationFactory;
}
