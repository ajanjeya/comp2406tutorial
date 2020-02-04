#ifndef CONTROL_H
#define CONTROL_H

#include "Calendar.h"
#include "View.h"

class Control
{

 public:
  Control();
  void launch();

 private:
  Calendar cal;
  View view;
  
};

#endif
