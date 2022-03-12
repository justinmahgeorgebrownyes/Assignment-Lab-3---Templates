#include <iostream>
#include <fstream>	// Require for File I/O
#include <string>
using namespace std;

//int main()
//{
//	// When working with a file stream
//	// 1. Declare the filestream object
//	// 2. "Open" the filestream to a desired file
//	// 3. Work on the file
//	// 4. "Close" the filestream
//
//	// 1.
//	fstream inOutFile;
//	string word;	// Used to read a word (or line) from the file.
//
//	// 2.
//	inOutFile.open("inout.txt");
//	// Check if the filestream opened
//	if (!inOutFile)
//	{
//		// File was not found or opened correctly
//		cout << "The file was not found." << endl;
//		return 1;
//	}
//
//	// 3. 
//	while (inOutFile >> word)
//	{
//		cout << word << endl;
//	}
//
//	// EOF (End of file) flag is set. Must clear to perform other operations
//	inOutFile.clear();
//
//	inOutFile << "Wallace" << endl;
//
//	// 4.
//	inOutFile.close();
//
//	return 0;
//}