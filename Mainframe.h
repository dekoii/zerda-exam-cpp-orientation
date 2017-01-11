#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <iostream>
#include "FileManager.h"

class Mainframe {
public:
  Mainframe();
  Mainframe(const Mainframe& orig);
  virtual ~Mainframe();
  void errorHandlingNoArguments(int argc);
private:

};

#endif /* MAINFRAME_H */

