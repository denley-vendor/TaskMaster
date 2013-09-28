
// Dependencies ------------------------------------------------------
#include "Line.h"

// END Dependencies --------------------------------------------------

IMPLEMENT_SERIAL (Line, CObject, 1)

Line::Line()
{}

Line::Line(const Line& aLine)
: itsP1(aLine.itsP1)
, itsP2(aLine.itsP2)
{}

Line::Line(const CPoint& p1, const CPoint& p2)
: itsP1(p1)
, itsP2(p2)
{}

Line& Line::operator=(const Line& aLine)
{
  if(this != &aLine)
  {
    itsP1 = aLine.itsP1;
	itsP2 = aLine.itsP2;
  }
  return *this;
}

Line::~Line()
{}

void Line::Serialize(CArchive& anArchive)
{
  CObject::Serialize(anArchive);

  if(anArchive.IsStoring())
  {
    anArchive << itsP1 << itsP2;
  }
  else
  {
	anArchive >> itsP1 >> itsP2;
  }

  return;

}