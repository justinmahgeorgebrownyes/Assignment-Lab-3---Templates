#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{
	IntArray table(10);
	int i;

	for (i = 0; i < table.size(); i++)
	{
		table[i] = i;
	}

	for (i = 0; i < table.size(); i++)
	{
		cout << table[i] << " ";
	}
	cout << endl;

	table[table.size()] = 0;	// table[10] = 0 INVALID

	return 0;
}