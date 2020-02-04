#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Event.h"
#include "SchoolEvent.h"
#include "WorkEvent.h"

Event::Event(string n, int p)
{
  name = n;
  priority = p;
}

void Event::setDate(int y, int m, int d, int h, int min, int sec)
{
  date.set(d, m, y, h, min, sec);
}

Date& Event::getDate()
{
  return date;
}

void Event::print()
{
  cout << setfill(' ') << setw(20) << name << ", priorty:" << priority;
  date.printLong();
  
}

int Event:: getPriority(){
  return this->priority;
}
Event :: ~Event(){}
