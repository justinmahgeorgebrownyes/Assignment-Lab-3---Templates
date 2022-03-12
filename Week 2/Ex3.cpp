// This program demonstrate the deficiencies of the default copy constructor
#include <iostream>
#include <iomanip>
#include "NumberArray.h"
using namespace std;

int main()
{
	NumberArray first(5, 33.75);

	NumberArray second = first;	// Trigger the copy constructor

	// Display the contents of the objects
	cout << setprecision(2) << fixed << showpoint;
	cout << "Value stored in the first object is: ";
	first.print();
	cout << endl << "Value stored in the second object is: ";
	second.print();
	cout << endl << endl;

	second.setValue(10.5);

	cout << "Value stored in the first object is: ";
	first.print();
	cout << endl << "Value stored in the second object is: ";
	second.print();
	cout << endl << endl;

	return 0;
}