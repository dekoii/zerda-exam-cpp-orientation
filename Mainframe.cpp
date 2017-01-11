#include "Mainframe.h"

Mainframe::Mainframe() { }

Mainframe::Mainframe(const Mainframe& orig) { }

Mainframe::~Mainframe() { }

void Mainframe::errorHandlingNoArguments(int argc) {
  if (argc == 1) {
    std::cerr << "No valid operation is provided." << std::endl;
  }
  
  if (argc < 4) {
    std::cerr << "Insufficient number of arguments" << std::endl;
  }
}

void Mainframe::errorHandlingNoInputFile() {
  string String;
  ifstream inputFile;
  if (inputFile.fail()) {
    cerr << "No filename is provided. It should be the 2nd argument." << endl;
  }
}
