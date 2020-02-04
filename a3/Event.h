#ifndef EVENT_H
#define EVENT_H

#include <string>
#include "Date.h"
using namespace std;


class Event
{
 public:
  Event(string="Default", int= 0);
  void  setDate(int=0, int=0, int=0, int=0, int=0, int =0);
  void  print();
  int getPriority();
  Date& getDate();
  virtual bool lessThan(Event*) = 0;
  virtual ~Event();
    

  protected:
    string name;
    Date   date;
    int priority;
};

#endif
