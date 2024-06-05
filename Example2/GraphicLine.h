#ifndef GraphicLine_h
#define GraphicLine_h

#include "GraphicObject.h"
#include "Line.h"

class GraphicLine : public GraphicObject
{
    public:
      GraphicLine(const Line& l);
      virtual ~GraphicLine();

      virtual void Draw(CDC& aDC) const;

    private:
      Line itsLine;
};

#endif
