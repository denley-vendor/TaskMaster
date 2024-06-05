#ifndef GraphicFactory_h
#define GraphicFactory_h

#include <afxwin.h>

class GraphicObject;
class Line;
class GraphicFactory
{
  public:
    GraphicFactory();
    virtual ~GraphicFactory();

    virtual GraphicObject* MakeLine(const Line& l1) const = 0;
    virtual GraphicFactory* Clone() const = 0;
};

#endif
