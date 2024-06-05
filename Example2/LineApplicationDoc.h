#include "stdafx.h"
#include <vector>
#include <xmemory>

class Line;
class LineApplicationDoc : public CDocument
{
  public:
    LineApplicationDoc();
    virtual ~LineApplicationDoc();

    virtual void AddLine(Line*);
    virtual void GetLines(std::vector<Line*, std::allocator<Line*> >& lines) const;

  private:
    CObArray itsLines;

    virtual void DeleteContents();
    virtual void Serialize(CArchive& ar);
            void ClearArray();

    DECLARE_DYNCREATE(LineApplicationDoc)
    DECLARE_MESSAGE_MAP()
};
