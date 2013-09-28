
// Dependencies ------------------------------------------------------
#include "LineApplicationDoc.h"
#include "Line.h"

// END Dependencies --------------------------------------------------

IMPLEMENT_DYNCREATE(LineApplicationDoc, CDocument)

BEGIN_MESSAGE_MAP(LineApplicationDoc, CDocument)
END_MESSAGE_MAP()


LineApplicationDoc::LineApplicationDoc()
{
  itsLines.SetSize(0,10);
}

LineApplicationDoc::~LineApplicationDoc()
{
  ClearArray();
  return;
}

void LineApplicationDoc::DeleteContents()
{
  ClearArray();
  return;
}

void LineApplicationDoc::ClearArray()
{
  int lineCount = itsLines.GetSize();
  if(lineCount != 0)
  {
    for(int i = 0; i < lineCount; i++)
	{
	  delete itsLines[i];
	}
	itsLines.RemoveAll();
  }
}


void LineApplicationDoc::Serialize(CArchive& anArchive)
{
  itsLines.Serialize(anArchive);
}

void LineApplicationDoc::AddLine(Line* aLine)
{
  itsLines.Add(aLine);
  SetModifiedFlag();
  UpdateViews(NULL, 0, aLine);
}

void LineApplicationDoc::GetLines(std::vector<Line*, std::allocator<Line*> >& lines) const
{
  int lineCount = itsLines.GetSize();
  if(lineCount != 0)
  {
    for(int i = 0; i < lineCount; i++)
	{
	  lines.push_back(static_cast<Line*> (itsLines[i]));
	}
  }
}

void LineApplicationDoc::UpdateViews(CView* sender,
		                             LPARAM lHint,
								     CObject* pHint)
{
  CDocument::UpdateAllViews(sender, lHint, pHint);
  return;
}
