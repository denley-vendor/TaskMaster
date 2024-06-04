#ifndef GraphicLine_h
#define GraphicLine_h

#include "GraphicObject.h"

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
