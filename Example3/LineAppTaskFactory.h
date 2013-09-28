// Interface Dependencies --------------------------------------------
#ifndef LineAppTaskFactory_h
#define LineAppTaskFactory_h

#include "TaskFactory.h"
// END Interface Dependencies ----------------------------------------

// -------------------------------------------------------------------
//
//  Name
//    LineAppTaskFactory
//
//  Description
//    This class implements the calls to make the actual task
//    objects that are used in the LineApplication.  It returns 
//    all of the objects that it makes as type Task*.
//
//  Note:
//
// -------------------------------------------------------------------

class LineAppTaskFactory : public TaskFactory
{
  public:
    LineAppTaskFactory();
	virtual ~LineAppTaskFactory();

	virtual Task* MakeLineTask(CView*, DocumentInterface*) const;
    virtual TaskFactory* Clone() const;
};

#endif