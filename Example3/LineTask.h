
// Interface Dependencies -------------------------------------------
#ifndef LineTask_h
#define LineTask_h

// END Interface Dependencies ---------------------------------------

// ------------------------------------------------------------------
//
//  Name
//    LineTask
//
//  Description
//    The base context class for the line task.  This class 
//    defines all of the action functions that will be called 
//    based on the events that occur.
//
//  Notes:
//
// ------------------------------------------------------------------

class LineTask
{
  public:
    LineTask();
	virtual ~LineTask();

    virtual void InitTask() = 0;
	virtual void RecordFirstPoint() = 0;
	virtual void AddLine() = 0;
	virtual void TrackLine() = 0;
	
	virtual void FSMError( const char* t, const char* s ) = 0;
};

#endif