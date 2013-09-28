// Interface Dependencies -------------------------------------------
#ifndef GraphicLine_h
#define GraphicLine_h

#include "GraphicObject.h"
#include "Line.h"
// END Interface Dependencies ---------------------------------------

// ------------------------------------------------------------------
//
//  Name:
//    GraphicLine
//
//  Description
//    This class implements a line that can be drawn into 
//    a CDC
//
//  Notes
// 
// ------------------------------------------------------------------

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