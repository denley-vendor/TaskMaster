
// Interface Dependencies --------------------------------------------
#ifndef TaskFactory_h
#define TaskFactory_h

#include <afxwin.h>

class Task;
class CView;
class DocumentInterface;
// END Interface Dependencies ----------------------------------------

// -------------------------------------------------------------------
//
//  Name
//    TaskFactory
//
//  Description
//    This is the abstract base class that defines the interface
//    to the TaskFactory.  The calling class will call the specific
//    member function to create the type of task that is desired.
//
//  Notes:
//
// -------------------------------------------------------------------
class TaskFactory
{
  public:
    TaskFactory();
	virtual ~TaskFactory();

	virtual Task* MakeLineTask(CView*, DocumentInterface*) const = 0;

	virtual TaskFactory* Clone() const = 0;
};

#endif