#include "FileManager.h"
#include "Converter.h"

using namespace std;


int main(int argc, char** argv) {

  FileManager file;
  file.getInputFromFile(string(argv[1]));
  file.outputToFile(string (argv[2]));
  
  
  
  
  return 0;
}
