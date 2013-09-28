#ifndef FSM_LineTaskFSM_1_8_1997_17_41_52_H
#define FSM_LineTaskFSM_1_8_1997_17_41_52_H
//--------------------------------------------
// test.h
//
// FSM :      LineTaskFSM
// Context:   LineTask
// Version:   
// Generated: Wednesday 1/8/1997 at 17:41:52
//

// Included header files

#include "LineTask.h"
#include <stddef.h>

//--------------------------------
// Forward Declarations
//

class LineTaskFSM;

//-----------------------------------------
// LineTaskFSMState: The base state class
//
class LineTaskFSMState
{
  public:
    virtual const char* StateName() const = 0;
    virtual void Do(LineTaskFSM&);
    virtual void DoubleClick(LineTaskFSM&);
    virtual void MouseDown(LineTaskFSM&);
    virtual void MouseUp(LineTaskFSM&);
    virtual void MovePoint(LineTaskFSM&);
};

//---------------------------------------
// State: Done
//
class LineTaskFSMDoneState : public LineTaskFSMState
{
  public:
    virtual const char* StateName() const
        {return "Done";}
};

//---------------------------------------
// State: WaitingForSecondPoint
//
class LineTaskFSMWaitingForSecondPointState : public LineTaskFSMState
{
  public:
    virtual const char* StateName() const
        {return "WaitingForSecondPoint";}
    virtual void MouseUp(LineTaskFSM&);
    virtual void MovePoint(LineTaskFSM&);
    virtual void DoubleClick(LineTaskFSM&);
};

//---------------------------------------
// State: WaitingForFirstPoint
//
class LineTaskFSMWaitingForFirstPointState : public LineTaskFSMState
{
  public:
    virtual const char* StateName() const
        {return "WaitingForFirstPoint";}
    virtual void MouseDown(LineTaskFSM&);
    virtual void MovePoint(LineTaskFSM&);
    virtual void MouseUp(LineTaskFSM&);
    virtual void DoubleClick(LineTaskFSM&);
};

//---------------------------------------
// State: Start
//
class LineTaskFSMStartState : public LineTaskFSMState
{
  public:
    virtual const char* StateName() const
        {return "Start";}
    virtual void Do(LineTaskFSM&);
};

//---------------------------------------------
// LineTaskFSM
// 
// This is the Finite State Machine Class
//
class LineTaskFSM: public LineTask
{
  public:
    // Static State Variables
    static LineTaskFSMDoneState Done;
    static LineTaskFSMWaitingForSecondPointState WaitingForSecondPoint;
    static LineTaskFSMWaitingForFirstPointState WaitingForFirstPoint;
    static LineTaskFSMStartState Start;

    LineTaskFSM(); // Default Constructor

    // Event functions
    void Do() {itsState->Do(*this);}
    void DoubleClick() {itsState->DoubleClick(*this);}
    void MouseDown() {itsState->MouseDown(*this);}
    void MouseUp() {itsState->MouseUp(*this);}
    void MovePoint() {itsState->MovePoint(*this);}

    // State Accessor Functions
    void SetState(LineTaskFSMState& theState) {itsState = &theState;}
    LineTaskFSMState& GetState() const {return *itsState;}

  private:
    LineTaskFSMState* itsState;
};

#endif /* FSM_LineTaskFSM_1_8_1997_17_41_52_H */
