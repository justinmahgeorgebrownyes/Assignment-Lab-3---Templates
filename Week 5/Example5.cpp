#include <iostream>
#include "SearchableVector.h"
#include "SortableVector.h"
using namespace std;

int main()
{
	const int SIZE = 10;

	int i = 0;

	SearchableVector<int> intTable(SIZE);
	SearchableVector<double> doubleTable(SIZE);

	// Store value in the array
	for (i = 0; i < SIZE; i++)
	{
		intTable[i] = (i * 2);
		doubleTable[i] = (i * 2.12);
	}

	// Display the values in the array
	cout << "These values are in intTable:\n";
	intTable.print();

	cout << "These values are in doubleTable:\n";
	doubleTable.print();

	// Demo the built in + operator
	for (i = 0; i < SIZE; i++)
	{
		intTable[i] += 5;
		doubleTable[i] += 5.3;
	}

	cout << "These values are in intTable:\n";
	intTable.print();

	cout << "These values are in doubleTable:\n";
	doubleTable.print();

	// Demo the ++ operator
	for (i = 0; i < SIZE; i++)
	{
		intTable[i]++;
		doubleTable[i]++;
	}

	cout << "These values are in intTable:\n";
	intTable.print();

	cout << "These values are in doubleTable:\n";
	doubleTable.print();

	int result;
	cout << "Searching for 6 in intTable.\n";
	result = intTable.findItem(14);
	if (result == -1)
	{
		cout << "6 was not found in intTable.\n";
	}
	else
	{
		cout << "6 was found in intTable at index " << result << endl;
	}

	//push
	intTable.push_back(2);
	doubleTable.push_back(2);

	cout << "These values are in intTable push:\n";
	intTable.print();

	cout << "These values are in doubleTable:\n";
	doubleTable.print();


	//pop
	intTable.pop_back();
	doubleTable.pop_back();

	cout << "These values are in intTable pop:\n";
	intTable.print();

	cout << "These values are in doubleTable:\n";
	doubleTable.print();

	intTable.push_back(1);
	intTable.push_back(2);	
	
	doubleTable.push_back(1.2);
	doubleTable.push_back(2.4);

	//sort
	SortableVector<int> intSort(intTable);
	SortableVector<double> doubleSort(doubleTable);

	intSort.sortItems();
	doubleSort.sortItems();

	cout << "These values are in intTable sort:\n";
	intSort.print();

	cout << "These values are in doubleTable:\n";
	doubleSort.print();


	return 0;
}