// Binary files
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file("anything.wewant", ios::out | ios::binary);
	if (!file)
	{
		cout << "Error creating file.";
		return 1;
	}

	// Integer data to write to the binary file
	int buffer[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(buffer) / sizeof(buffer[0]);	// Determines how many elements are in the array

	// Write the data and close the file
	cout << "Now writing the data to the file.\n";
	file.write(reinterpret_cast<char*>(buffer), sizeof(buffer));
	file.close();

	// READ IN THE BINARY FILE!

	file.open("anything.wewant", ios::in | ios::binary);
	if (!file)
	{
		cout << "Error opening file.";
		return 1;
	}

	cout << "Reading back the data.\n";
	file.read(reinterpret_cast<char*>(buffer), sizeof(buffer));

	// Write out the array to the console
	for (int i = 0; i < size; i++)
	{
		cout << buffer[i] << " ";
	}

	file.close();

	return 0;
}