#ifndef CALENDAR_H
#define CALENDAR_H
#define MAX_ARR_SIZE 30

#include "Event.h"
#include "List.h"

class Calendar

{
 public:
  Calendar();
  ~Calendar();
  void addEvent(Event*);
  void print();
  
 private:
  string name;
  List  eventList;
  int numEvents;





};
#endif
