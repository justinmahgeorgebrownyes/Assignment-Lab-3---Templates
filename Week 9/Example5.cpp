// Demonstrate file rewind
#include <iostream>
#include <fstream>
using namespace std;

//int main()
//{
//	char ch;
//	fstream ioFile("rewind.txt", ios::out);
//
//	// Test Open
//	if (!ioFile)
//	{
//		cout << "Error in trying to create the file";
//		return 1;
//	}
//
//	// Write to the file
//	ioFile << "I am very hungry." << endl << "No, you are hungry AND thirsty" << endl;
//	ioFile.close();
//
//	// Open the file
//	ioFile.open("rewind.txt", ios::in);
//	if (!ioFile)
//	{
//		cout << "Error in opening the file";
//		return 1;
//	}
//
//	// Read the file and print to the screen
//	ioFile.get(ch);
//	while (!ioFile.fail())
//	{
//		cout.put(ch);
//		ioFile.get(ch);
//	}
//
//	// Rewind the file
//	ioFile.clear();
//	ioFile.seekg(10L, ios::beg);
//
//	ioFile.seekg(-5L, ios::cur);
//
//	// Read the file and print to the screen
//	ioFile.get(ch);
//	while (!ioFile.fail())
//	{
//		cout.put(ch);
//		ioFile.get(ch);
//	}
//
//	ioFile.close();
//
//	return 0;
//}