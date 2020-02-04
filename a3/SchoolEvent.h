#ifndef SCHOOLEVENT_H
#define SCHOOLEVENT_H
using namespace std;
#include "Event.h"
class SchoolEvent: public Event
{
 public:
  SchoolEvent(string , int);
  virtual bool lessThan(Event*);
};
#endif
