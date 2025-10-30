#include <iostream>
#include <fstream>
using namespace std;
int main() {
string sourceFile, targetFile;
cout << "Enter source file name: ";
cin >> sourceFile;
cout << "Enter target file name: ";
cin >> targetFile;
ifstream inFile(sourceFile);
if (!inFile) {
cout << "Error: Unable to open source file!" << endl;
return 1;
}
ofstream outFile(targetFile);
if (!outFile) {
cout << "Error: Unable to create target file!" << endl;
return 1;
}
string line;
while (getline(inFile, line)) {
outFile << line << endl;
}
cout << "File copied successfully!" << endl;
inFile.close();
outFile.close();
return 0;
}
