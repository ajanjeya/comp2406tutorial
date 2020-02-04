#ifndef WORKEVENT_H
#define WORKEVENT_H
using namespace std;
#include "Event.h"
class WorkEvent: public Event
{
 public:
  WorkEvent(string, int);
  virtual bool lessThan(Event*);
 


};
#endif
