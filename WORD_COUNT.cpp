#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string fileName;
  cout << "Enter the file name: ";
  cin >> fileName;

  ifstream inputFile(fileName); // Open the text file

  if (inputFile.is_open()) {
    string line;
    int wordCount = 0;

    while (getline(inputFile, line)) {
      stringstream ss(line);
      string word;

      while (ss >> word) {
        wordCount++;
      }
    }

    inputFile.close();

    cout << "Number of words in the file: " << wordCount << endl;
  } else {
    cout << "Failed to open the file." << endl;
  }

  return 0;
}
