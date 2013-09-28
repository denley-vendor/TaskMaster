
// Interface Dependencies --------------------------------------------
#ifndef GraphicFactory_h
#define GraphicFactory_h

#include <afxwin.h>


class GraphicObject;
class Line;
// END Interface Dependencies ----------------------------------------

// -------------------------------------------------------------------
//
//  Name
//    GraphicFactory
//
//  Description
//    This is the abstract base class that defines the interface
//    to the GraphicFactory.
//
//  Notes:
//
// -------------------------------------------------------------------
class GraphicFactory
{
  public:
    GraphicFactory();
	virtual ~GraphicFactory();

	virtual GraphicObject* MakeLine(const Line& l1) const = 0;

	virtual GraphicFactory* Clone() const = 0;
};

#endif