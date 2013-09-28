// Interface Dependencies -------------------------------------------
#ifndef GraphicObject_h
#define GraphicObject_h

#include <afxwin.h>
// END Interface Dependencies ---------------------------------------

// ------------------------------------------------------------------
//
//  Name:
//    GraphicObject
//
//  Description
//    This class is simply an interface for GraphicObjects
//
//  Notes
// 
// ------------------------------------------------------------------
class GraphicObject
{
	public:
		GraphicObject();
		virtual ~GraphicObject();

		virtual void Draw(CClientDC& aDC) const = 0;
};

#endif