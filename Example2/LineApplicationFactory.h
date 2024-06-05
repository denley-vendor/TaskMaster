#ifndef LineApplicationFactory_h
#define LineApplicationFactory_h

#include "GraphicFactory.h"

class Line;
class LineApplicationFactory : public GraphicFactory
{
  public:
    LineApplicationFactory();
    virtual ~LineApplicationFactory();

    virtual GraphicObject* MakeLine(const Line& l1) const;
    virtual GraphicFactory* Clone() const;
};

#endif
