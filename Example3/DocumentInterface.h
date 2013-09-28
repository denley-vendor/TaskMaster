
// Interface Dependencies --------------------------------------------
#ifndef DocumentInterface_h
#define DocumentInterface_h

#include <afxwin.h>

class Line;
// END Interface Dependencies ----------------------------------------

// -------------------------------------------------------------------
//
//  Name
//    DocumentInterface
//
//  Description
//    This is the abstract base class that defines the interface
//    to the Document. This is to allow the tasks to not depend
//    on the actual document class.
//
//  Notes:
//
// -------------------------------------------------------------------

class DocumentInterface
{
  public:
    DocumentInterface();
	virtual ~DocumentInterface();

	virtual void AddLine(Line*) = 0;
	virtual void UpdateViews(CView* sender,
		                     LPARAM lHint,
						     CObject* pHint) = 0;
};

#endif
