#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <fstream>

#include "Converter.h"

class FileManager {
public:
  void getInputFromFile(std::string file);
  void outputToFile(std::string outputfile);
  FileManager();
  virtual ~FileManager();
private:
  std::string buffer;
  Converter converter;
};

#endif /* FILEMANAGER_H */

