// Count the number of times a character appears
#include <iostream>
#include <string>
using namespace std;

// Function prototype
int frequency(char, string, int);

//int main()
//{
//	string inputString;
//	char ch;
//
//	cout << "Enter in a string of your choice: " << endl;
//	getline(cin, inputString);
//	cout << "Enter a character you want to determine the frequency of in the string: ";
//	cin >> ch;
//
//	cout << "The letter e appears " << frequency(ch, inputString, 0) << " times.\n";
//
//	return 0;
//}

int frequency(char ch, string inputString, int position)
{
	// Base case - We have reached the end of the string
	if (position == inputString.length()) 
	{
		return 0;
	}

	if (inputString[position] == ch)
	{
		return 1 + frequency(ch, inputString, position + 1);
	}
	else
	{
		return frequency(ch, inputString, position + 1);
	}
}