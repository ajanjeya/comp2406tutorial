#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Calendar.h"

Calendar:: Calendar()
{
 
  
}
Calendar::~Calendar()
{

}
void Calendar::addEvent(Event* a)
{
  eventList.add(a);

  
}
void Calendar::print(){
  eventList.print();



}


 
