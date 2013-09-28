//--------------------------------------------
// test.cpp
//
// FSM :      LineTaskFSM
// Context:   LineTask
// Version:   
// Generated: Wednesday 1/8/1997 at 17:41:52
//

static char _versID[]  = "";

#include "LineTaskFsm.h"

// Definitions of static state objects

LineTaskFSMDoneState LineTaskFSM::Done;
LineTaskFSMWaitingForSecondPointState LineTaskFSM::WaitingForSecondPoint;
LineTaskFSMWaitingForFirstPointState LineTaskFSM::WaitingForFirstPoint;
LineTaskFSMStartState LineTaskFSM::Start;

// Default Event Functions 

void LineTaskFSMState::Do(LineTaskFSM& s)
  {s.FSMError("Do", s.GetState().StateName());}

void LineTaskFSMState::DoubleClick(LineTaskFSM& s)
  {s.FSMError("DoubleClick", s.GetState().StateName());}

void LineTaskFSMState::MouseDown(LineTaskFSM& s)
  {s.FSMError("MouseDown", s.GetState().StateName());}

void LineTaskFSMState::MouseUp(LineTaskFSM& s)
  {s.FSMError("MouseUp", s.GetState().StateName());}

void LineTaskFSMState::MovePoint(LineTaskFSM& s)
  {s.FSMError("MovePoint", s.GetState().StateName());}


// The States and their Transitions


//-----------------------------------
// Done Actions and Transitions
//

//-----------------------------------
// WaitingForSecondPoint Actions and Transitions
//

// Starting State: WaitingForSecondPoint
// Event:          MouseUp
//
void LineTaskFSMWaitingForSecondPointState::MouseUp(LineTaskFSM& s)
{
    s.AddLine();

    // Change the state
    s.SetState(LineTaskFSM::Done);
    // Exit functions for: WaitingForSecondPoint
    // Exit functions for: GettingPoints
    // Entry functions for: Done
}

// Starting State: WaitingForSecondPoint
// Event:          MovePoint
//
void LineTaskFSMWaitingForSecondPointState::MovePoint(LineTaskFSM& s)
{
    s.TrackLine();

    // Change the state
    s.SetState(LineTaskFSM::WaitingForSecondPoint);
    // Exit functions for: WaitingForSecondPoint
    // Entry functions for: WaitingForSecondPoint
}

// Starting State: WaitingForSecondPoint
// Event:          DoubleClick
//
void LineTaskFSMWaitingForSecondPointState::DoubleClick(LineTaskFSM& s)
{
}

//-----------------------------------
// WaitingForFirstPoint Actions and Transitions
//

// Starting State: WaitingForFirstPoint
// Event:          MouseDown
//
void LineTaskFSMWaitingForFirstPointState::MouseDown(LineTaskFSM& s)
{
    s.RecordFirstPoint();

    // Change the state
    s.SetState(LineTaskFSM::WaitingForSecondPoint);
    // Exit functions for: WaitingForFirstPoint
    // Entry functions for: WaitingForSecondPoint
}

// Starting State: WaitingForFirstPoint
// Event:          MovePoint
//
void LineTaskFSMWaitingForFirstPointState::MovePoint(LineTaskFSM& s)
{

    // Change the state
    s.SetState(LineTaskFSM::WaitingForFirstPoint);
    // Exit functions for: WaitingForFirstPoint
    // Entry functions for: WaitingForFirstPoint
}

// Starting State: WaitingForFirstPoint
// Event:          MouseUp
//
void LineTaskFSMWaitingForFirstPointState::MouseUp(LineTaskFSM& s)
{
}

// Starting State: WaitingForFirstPoint
// Event:          DoubleClick
//
void LineTaskFSMWaitingForFirstPointState::DoubleClick(LineTaskFSM& s)
{
}

//-----------------------------------
// Start Actions and Transitions
//

// Starting State: Start
// Event:          Do
//
void LineTaskFSMStartState::Do(LineTaskFSM& s)
{
    s.InitTask();

    // Change the state
    s.SetState(LineTaskFSM::WaitingForFirstPoint);
    // Exit functions for: Start
    // Entry functions for: GettingPoints
    // Entry functions for: WaitingForFirstPoint
}

//------------------------------------------
// State Machine Constructor: LineTaskFSM
//    Set Initial State to: Start
//
LineTaskFSM::LineTaskFSM() : itsState(&Start)
{
    // Entry functions for: Start
}
