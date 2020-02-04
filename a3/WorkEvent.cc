#include <iostream>
#include <iomanip>
using namespace std;

#include "Event.h"
#include "WorkEvent.h"

WorkEvent:: WorkEvent(string n, int p) : Event(n,p){}
bool WorkEvent:: lessThan(Event* a){
  return this->getPriority()< a->getPriority();
}
