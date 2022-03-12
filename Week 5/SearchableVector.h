#pragma once
#include "SimpleVector.h"

template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
	// Constructor
	SearchableVector(int arraySize) : SimpleVector<T>(arraySize) { }
	// Copy constructor
	SearchableVector(SearchableVector&);
	// Additional constructor
	SearchableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) { }
	// Find an item
	int findItem(T);
};

template <class T>
SearchableVector<T>::SearchableVector(SearchableVector& obj) : SimpleVector<T>(obj) { }

template<class T>
int SearchableVector<T>::findItem(T item)
{
	for (int i = 0; i < this->size(); i++)
	{
		if (this->operator[](i) == item)
		{
			return i;
		}
	}

	return -1;
}