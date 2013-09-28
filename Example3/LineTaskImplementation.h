// Interface Dependencies -------------------------------------
#ifndef LineTaskImplementation_h
#define LineTaskImplementation_h

#include <afxwin.h>
#include "LineTaskFsm.h"
#include "Task.h"

class LineApplicationDoc;
class GraphicFactory;
class DocumentInterface;
// END Interface Dependencies ---------------------------------

// ------------------------------------------------------------
//
//  Name
//    LineTaskImplementation
//
//  Description
//    This class implements the action functions for the
//    line task.  It stores the first point and 
//    also is responsible for dragging the temporary line
//    around the screen.  Upon completion it will call
//    UpdateAllViews on the passed in document in order
//    to have the screen updated.
//
//  Notes:
//
// ------------------------------------------------------------

class LineTaskImplementation : public LineTaskFSM,
                               public Task
{
  public:
    LineTaskImplementation(CView* theView,
		                   DocumentInterface* theDoc);
	virtual ~LineTaskImplementation();

	// member function defined in task
	virtual void Start();
	virtual void LeftMouseUp(UINT nFlags, const CPoint& point);
	virtual void LeftMouseDown(UINT nFlags, const CPoint& point);
	virtual void MouseMove(UINT nFlags, const CPoint& point);

	// member functions defined in the actions of the FSM
    virtual void InitTask();
	virtual void RecordFirstPoint();
	virtual void AddLine();
	virtual void TrackLine();
	
	virtual void FSMError(const char* t, const char* s);
  private:
	CPen*                itsBluePen;
	CPoint               itsFirstPoint;
	CPoint               itsSecondPoint;
	CPoint               itsTemporaryPoint;
	GraphicFactory*      itsGraphicFactory;

	// for update purposes
	CView*               itsView;
	DocumentInterface*   itsDocument;
};

#endif