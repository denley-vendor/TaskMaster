// Interface Dependencies --------------------------------------------
#ifndef LineApplicationFactory_h
#define LineApplicationFactory_h

#include "GraphicFactory.h"
// END Interface Dependencies ----------------------------------------

// -------------------------------------------------------------------
//
//  Name
//    LineApplicationFactory
//
//  Description
//    This class implements the calls to make the actual graphic
//    objects that are used in the LineApplication.  It returns 
//    all of the objects that it makes as type GraphicObject*.
//
//  Note:
//
// -------------------------------------------------------------------

class LineApplicationFactory : public GraphicFactory
{
  public:
    LineApplicationFactory();
	virtual ~LineApplicationFactory();

	virtual GraphicObject* MakeLine(const CPoint& p1, 
		                            const CPoint& p2) const;
};

#endif