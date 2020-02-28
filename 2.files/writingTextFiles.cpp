#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // ofstream outFile;
  fstream outFile;

  // string outputFileName = "text1.txt";
  string outputFileName = "text3.txt";

  // outFile.open(outputFileName);
  outFile.open(outputFileName, ios::out);

  if (outFile.is_open()) {
    outFile << "Hello this is line 1. " << endl;
    outFile << "line 2 " << flush;
    outFile << "line 3 but following flush" << endl;
    outFile << 123 << endl;
    outFile.close();
  } else {
    cout << "The file " << outputFileName
         << "is not open for some reason:" << endl;
  }
  return 0;
}