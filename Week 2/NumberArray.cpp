#include <iostream>
#include "NumberArray.h"
using namespace std;

NumberArray::NumberArray()
{
	cout << "No size of array provided. Defaulting to size 10 and value 1.";
	arraySize = 10;
	aPtr = new double[arraySize];
	setValue(1);
}

NumberArray::NumberArray(NumberArray& obj)
{
	arraySize = obj.arraySize;
	// aPtr = obj.aPtr;				// Doesn't solve our problem!
	aPtr = new double[arraySize];	// Solves our problem
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = obj.aPtr[i];		// Explicitly assign each array element to the new array
	}
}

NumberArray::NumberArray(int size, double value)
{
	arraySize = size;
	aPtr = new double[arraySize];
	setValue(value);
}

NumberArray::~NumberArray()
{
	if (arraySize > 0)	// Ensure that there is an array that exists
	{
		delete[] aPtr;
		// aPtr = nullptr;
	}
}

void NumberArray::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aPtr[i] << " ";
	}
}

void NumberArray::setValue(double value)
{
	for (int i = 0; i < arraySize; i++)
	{
		aPtr[i] = value;
	}
}