#ifndef GraphicFactory_h
#define GraphicFactory_h

#include <afxwin.h>

class GraphicObject;
class GraphicFactory
{
  public:
    GraphicFactory();
    virtual ~GraphicFactory();
    virtual GraphicObject* MakeLine(const CPoint& p1, 
        const CPoint& p2) const = 0;
};

#endif
