
// Interface Dependencies ---------------------------------------------
#ifndef Task_h
#define Task_h

#include "stdafx.h"
// END Interface Dependencies -----------------------------------------

// --------------------------------------------------------------------
//
//  Name
//    Task
//
//  Description
//    Abstract base class for all tasks that interact 
//    with the user using mouse events.
//
//  Notes:
//
// --------------------------------------------------------------------

class Task
{
  public:
		Task();
		virtual ~Task();

		virtual void Start() = 0;
		virtual void LeftMouseUp(UINT nFlags, const CPoint& point) = 0;
		virtual void LeftMouseDown(UINT nFlags, const CPoint& point) = 0;
		virtual void MouseMove(UINT nFlags, const CPoint& point) = 0;

	private:
};

#endif

    