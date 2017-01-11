#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

class Converter {
public:
  Converter();
  Converter(const Converter& orig);
  virtual ~Converter();
  void setShiftValue(int shift);
  void setStringToBeConverted(std:: string input);
  std::string convertInputString(std::string line);
private:
  int shiftValue;
  std::string convertable;
   
};

#endif /* CONVERTER_H */

