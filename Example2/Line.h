#ifndef Line_h
#define Line_h

#include <afxwin.h>

class Line : public CObject
{
  public:
    Line();
    Line(const CPoint& p1, const CPoint& p2);
    virtual ~Line();
    Line(const Line& aLine);
    Line& operator=(const Line& aLine);

    CPoint GetP1() const
    { return itsP1; }

    CPoint GetP2() const
    { return itsP2; }

    virtual void Serialize(CArchive&);

  private:
    CPoint   itsP1;
    CPoint   itsP2;
 
    DECLARE_SERIAL(Line)
};

#endif
