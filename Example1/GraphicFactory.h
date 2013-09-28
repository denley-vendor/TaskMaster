
// Interface Dependencies --------------------------------------------
#ifndef GraphicFactory_h
#define GraphicFactory_h

#include <afxwin.h>

class GraphicObject;
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

	virtual GraphicObject* MakeLine(const CPoint& p1, 
		                            const CPoint& p2) const = 0;
};

#endif