#ifndef GraphicObject_h
#define GraphicObject_h

#include <afxwin.h>
class GraphicObject
{
  public:
    GraphicObject();
    virtual ~GraphicObject();

    virtual void Draw(CDC& aDC) const = 0;
};

#endif
