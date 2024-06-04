#ifndef LineApplicationFactory_h
#define LineApplicationFactory_h

#include "GraphicFactory.h"

class LineApplicationFactory : public GraphicFactory
{
  public:
    LineApplicationFactory();
    virtual ~LineApplicationFactory();

	  virtual GraphicObject* MakeLine(const CPoint& p1, 
        const CPoint& p2) const;
};

#endif
