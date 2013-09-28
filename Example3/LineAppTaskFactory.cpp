
// Dependencies -------------------------------------------------------
#include "LineAppTaskFactory.h"
#include "LineTaskImplementation.h"

// END Dependencies ---------------------------------------------------

LineAppTaskFactory::LineAppTaskFactory()
{}

LineAppTaskFactory::~LineAppTaskFactory()
{}

// make the line task that is used un LineApplication
Task* LineAppTaskFactory::MakeLineTask(CView* view,
								       DocumentInterface* doc) const
		
{
  return new LineTaskImplementation(view, doc);
}

TaskFactory* LineAppTaskFactory::Clone() const
{
  return new LineAppTaskFactory;
}