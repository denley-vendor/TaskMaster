//Interface Dependencies ----------------------------------------------

#include "stdafx.h"
#include <vector>
#include <xmemory>

#include "DocumentInterface.h"
class Line;
// END Interface Dependencies -----------------------------------------

// --------------------------------------------------------------------
//
//  Name
//    LineApplicationDoc
//
//  Description
//    This class is responsible for saving the actual lines out 
//    to the disk.
//
//  Notes:
//
// --------------------------------------------------------------------

class LineApplicationDoc : public CDocument,
                           public DocumentInterface
{
  public:
	LineApplicationDoc();
	virtual ~LineApplicationDoc();

	virtual void AddLine(Line*);
	virtual void GetLines(std::vector<Line*, std::allocator<Line*> >& lines) const;
	virtual void UpdateViews(CView* sender,
		                     LPARAM lHint,
							 CObject* pHint);
  private:
	CObArray itsLines;

	virtual void DeleteContents();
	virtual void Serialize(CArchive& ar);
            void ClearArray();

	DECLARE_DYNCREATE(LineApplicationDoc)
	DECLARE_MESSAGE_MAP()
};