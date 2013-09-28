// Interface Dependencies -------------------------------------------
#ifndef GraphicLine_h
#define GraphicLine_h

#include "GraphicObject.h"
// END Interface Dependencies ---------------------------------------

// ------------------------------------------------------------------
//
//  Name:
//    GraphicLine
//
//  Description
//    This class implements a line that can be drawn into 
//    a CClientDC
//
//  Notes
// 
// ------------------------------------------------------------------

class GraphicLine : public GraphicObject
{
	public:
		GraphicLine(const CPoint& p1, const CPoint& p2);
		virtual ~GraphicLine();

		virtual void Draw(CClientDC& aDC) const;

	private:
		CPoint itsP1;
		CPoint itsP2;
};

#endif