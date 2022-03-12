// getline demonstration
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//int main()
//{
//	fstream file;
//	string input;
//
//	// Open the file
//	file.open("wallace.txt", ios::in);
//	if (file.fail())
//	{
//		cout << "File open error!" << endl;
//		return 1;
//	}
//
//	// Read the file and print to the screen
//	// file >> input;
//	getline(file, input);	// Default delim character is '\n'
//	while (!file.fail())
//	{
//		cout << input << endl;
//		// file >> input;
//		getline(file, input);
//	}
//
//	// Close the file
//	file.close();
//
//	return 0;
//}