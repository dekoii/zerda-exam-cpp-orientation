#include "FileManager.h"

FileManager::FileManager() {
  
}

FileManager::~FileManager() { }

void FileManager::getInputFromFile(std::string file) {
  std::ifstream inputfile;
  std::string line;
  inputfile.open(file.c_str());
  if (inputfile.is_open()) {
    while (!inputfile.eof()) {
      getline(inputfile,line);
    }
  }
  buffer = line;
  inputfile.close();
}

void FileManager::outputToFile(std::string outputfile) {
  std::ofstream output;
  output.open(outputfile.c_str());
  if (output.is_open()) {
    output << converter.convertInputString(buffer);
  }else {
    std::cout << converter.convertInputString(buffer);
  }
  output.close();
}