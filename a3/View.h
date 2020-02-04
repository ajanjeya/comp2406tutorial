#ifndef VIEW_H
#define VIEW_H
#include "Calendar.h"
#include "Event.h"

class View
{
 public:
  View();
  bool displayMenu();
  void readEvent(string&, int&, int&, int&,int&, int&, int&, int&);
  void print(Calendar);
  int readEventType();

 private:
  Calendar cal;
  

};
#endif
