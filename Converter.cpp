#include "Converter.h"

Converter::Converter() {

}

Converter::Converter(const Converter& orig) { }

Converter::~Converter() { }


std::string Converter::convertInputString(std::string line) {
  std::string result = "";
  for (unsigned int i = 0; i < strlen(convertable.c_str()); i++) {
    if (int(convertable.c_str()[i]) > 64 && int(convertable.c_str()[i]) < 91) {
      if (convertable.c_str()[i] + shiftValue > 90) {
        result += char(65 + (int(convertable.c_str()[i] + shiftValue) - 90));
      }
      result += char(int(convertable.c_str()[i]) + shiftValue); 
    } else if (int(convertable.c_str()[i]) > 96 && int(convertable.c_str()[i]) < 123) {
      if (convertable.c_str()[i] + shiftValue > 123) {
        result += char(97+ (int(convertable.c_str()[i] + shiftValue) - 122));
      }
      result += char(int(convertable.c_str()[i]) + shiftValue); 
    } else {
      result += char(int(convertable.c_str()[i]) + shiftValue);
    }
  result += '\n';
  return result;
  }
}

void Converter::setShiftValue(int s) {
  shiftValue = s;
}

void Converter::setStringToBeConverted(std::string input) {
  convertable = input;
}