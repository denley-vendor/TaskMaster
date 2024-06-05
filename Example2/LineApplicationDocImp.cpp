#include "stdafx.h"
#include "LineApplication.h"

#include "LineApplicationDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

IMPLEMENT_DYNCREATE(LineApplicationDoc, CDocument)

BEGIN_MESSAGE_MAP(LineApplicationDoc, CDocument)
    //{{AFX_MSG_MAP(LineApplicationDoc)
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()

LineApplicationDoc::LineApplicationDoc()
{
}

LineApplicationDoc::~LineApplicationDoc()
{
}

BOOL LineApplicationDoc::OnNewDocument()
{
  return CDocument::OnNewDocument();
}

void LineApplicationDoc::Serialize(CArchive& ar)
{
  if (ar.IsStoring())
  {
  }
  else
  {
  }
}

#ifdef _DEBUG
void LineApplicationDoc::AssertValid() const
{
    CDocument::AssertValid();
}

void LineApplicationDoc::Dump(CDumpContext& dc) const
{
    CDocument::Dump(dc);
}
#endif //_DEBUG
