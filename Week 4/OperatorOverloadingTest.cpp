#include <iostream>
#include "Length.h"
using namespace std;

//int main()
//{
//	Length first(0), second(0), third(0);
//	int f, i;	// Feet and inches
//
//	cout << "Enter a distance in feet and inches: ";
//	cin >> f >> i;
//	first.setLength(f, i);
//
//	cout << "Enter another distance in feet and inches: ";
//	cin >> f >> i;
//	second.setLength(f, i);
//
//	// third = first + second;
//	third = first + second;	// third = operator+(first, second)
//	cout << "first + second = ";
//	cout << third.getFeet() << " feet, " << third.getInches() << " inches." << endl;
//
//	// Implement: third = first - second;
//	third = first - second;
//	cout << "first - second = ";
//	cout << third.getFeet() << " feet, " << third.getInches() << " inches." << endl;
//
//	cout << "first < second";
//	cout << endl;
//	if (first < second)
//	{
//		cout << "true";
//	}
//	else
//	{
//		cout << "false";
//	}
//
//	cout << "\nfirst > second";
//	cout << endl;
//	if (first > second)
//	{
//		cout << "true";
//	}
//	else
//	{
//		cout << "false";
//	}
//
//	cout << "\nfirst == second";
//	cout << endl;
//	if (first == second)
//	{
//		cout << "true";
//	}
//	else
//	{
//		cout << "false";
//	}
//
//	cout << "\n\n Test prefix and postfix increment.";
//	cout << first.getFeet() << " feet, " << first.getInches() << " inches." << endl;
//	cout << second.getFeet() << " feet, " << second.getInches() << " inches." << endl;
//	first++;
//	++second;
//	cout << first.getFeet() << " feet, " << first.getInches() << " inches." << endl;
//	cout << second.getFeet() << " feet, " << second.getInches() << " inches." << endl;
//
//	cout << "\nTesting output and input stream operators.\n";
//	cout << first << endl << second << endl << third;
//
//	cout << "\nCalling cin on my Length object!\n";
//	
//	Length fourth(0);
//	cin >> fourth;
//	cout << fourth;
//
//	return 0;
//}