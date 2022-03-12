#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

//Modify the SimpleVector class to include the member functions push_back and pop_back. 
//push_back should accept a single argumentand insert its value at the end of the array.
//pop_back should accept no argumentsand remove the last element from the array.


template <class T>
class SimpleVector
{
private:
	T* aptr; // Pointer to dynamically allocated array
	int arraySize;						// Size of the array
	void subError() const;				// Handle subscript out of range errors
public:
	SimpleVector(int);					// Constructor
	SimpleVector(const SimpleVector&);	// Copy constructor
	~SimpleVector();					// Destructor
	int size() const
	{
		return arraySize;
	}
	T& operator[](int);					// Overloaded [] operator
	void print() const;					// Output array elements
	void push_back(T endValue);
	void pop_back();
};

// Constructors
template <class T>
SimpleVector<T>::SimpleVector(int arraySize)
{
	this->arraySize = arraySize;
	aptr = new T[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = int();
	}
}

// Copy constructor
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
	arraySize = obj.arraySize;
	aptr = new T[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = obj.aptr[i];
	}
}

// Destructor
template <class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
	{
		delete[] aptr;
	}

	aptr = nullptr;
}

// SubError function
template <class T>
void SimpleVector<T>::subError() const
{
	cout << "ERROR: Subscript out of range.\n";
	exit(0);
}

// Overload the [] operator.
template <class T>
T& SimpleVector<T>::operator[](int sub)
{
	if (sub < 0 || sub >= arraySize)
	{
		// Sub value out of range
		subError();
	}

	// Sub value is fine
	return aptr[sub];
}

// Print all entries in the array
template <class T>
void SimpleVector<T>::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aptr[i] << " ";
	}
	cout << endl;
}


template <class T>
void SimpleVector<T>::push_back(T endValue) {
	arraySize++;
	T* temp;
	temp = new T[arraySize];
	for (int i = 0; i < arraySize - 1; i++)
	{
		temp[i] = aptr[i];
	}

	delete[] aptr;

	aptr = temp;

	aptr[arraySize - 1] = endValue;
}

template <class T>
void SimpleVector<T>::pop_back(){

	T* temp;
	temp = new T[arraySize--];
	for (int i = 0; i < arraySize; i++)
	{
		temp[i] = aptr[i];
	}

	delete[] aptr;

	aptr = temp;


}