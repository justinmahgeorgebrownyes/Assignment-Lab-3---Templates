// Binary search
#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int array[], int first, int last, int value);

//int main()
//{
//	const int SIZE = 20;
//
//	int tests[SIZE] = { 101, 142, 147, 189, 199, 207, 222,
//						234, 289, 296, 310, 319, 388, 394,
//						417, 429, 447, 521, 536, 600 };
//	int result;	// Result of the search (subscript)
//	int empID;	// What to search for
//
//	cout << "Enter an ID you wish to search for: ";
//	cin >> empID;
//	result = binarySearch(tests, 0, SIZE - 1, empID);
//
//	if (result == -1)
//	{
//		cout << "That number does not exist in the array.\n";
//	}
//	else
//	{
//		// Number does exist!
//		cout << "That ID is found at element: " << result << " in the array\n";
//	}
//
//	return 0;
//}

/*
	Binary Search
	-------------
	Search between first and last for a given array.

	Determine mid point, then compare value to midpoint.	<-- Search ends here OR
	If all values have been searched, return -1				<-- search ends here
	
	If midpoint is greater than value, then recusively search lower half. 
	If midpoint is lower than value, the recusively search upper half. 
*/

int binarySearch(const int array[], int first, int last, int value)
{
	int middle;		// Mid point of search

	// Base case
	if (first > last)
	{
		return -1;	// Did not find value in array
	}

	middle = (first + last) / 2;

	if (array[middle] == value)
	{
		// We found the value
		return middle;
	}

	// Value not found
	if (array[middle] < value)
	{
		// Upper half
		return binarySearch(array, middle + 1, last, value);
	}
	else
	{
		// Lower half
		return binarySearch(array, first, middle - 1, value);
	}
}