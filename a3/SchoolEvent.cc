#include <iostream>
#include <iomanip>
using namespace std;
#include "SchoolEvent.h"
#include "Event.h"

SchoolEvent:: SchoolEvent(string n, int p) : Event(n,p){}

bool SchoolEvent:: lessThan(Event* a){
  return this->date.lessThan(a->getDate());
}
