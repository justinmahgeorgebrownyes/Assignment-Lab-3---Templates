#include <iostream>
#include "SimpleVector.h"
using namespace std;

//int main()
//{
//	const int SIZE = 10;
//
//	int i = 0;
//
//	SimpleVector<int> intTable(SIZE);
//	SimpleVector<double> doubleTable(SIZE);
//
//	// Store value in the array
//	for (i = 0; i < SIZE; i++)
//	{
//		intTable[i] = (i * 2);
//		doubleTable[i] = (i * 2.12);
//	}
//
//	// Display the values in the array
//	cout << "These values are in intTable:\n";
//	intTable.print();
//
//	cout << "These values are in doubleTable:\n";
//	doubleTable.print();
//
//	// Demo the built in + operator
//	for (i = 0; i < SIZE; i++)
//	{
//		intTable[i] += 5;
//		doubleTable[i] += 5.3;
//	}
//
//	cout << "These values are in intTable:\n";
//	intTable.print();
//
//	cout << "These values are in doubleTable:\n";
//	doubleTable.print();
//
//	// Demo the ++ operator
//	for (i = 0; i < SIZE; i++)
//	{
//		intTable[i]++;
//		doubleTable[i]++;
//	}
//
//	cout << "These values are in intTable:\n";
//	intTable.print();
//
//	cout << "These values are in doubleTable:\n";
//	doubleTable.print();
//
//	return 0;
//}