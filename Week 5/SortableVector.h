#pragma once
#include "SimpleVector.h"

template <class T>
class SortableVector: public SimpleVector<T>
{
public:
	// Constructor
	SortableVector(int arraySize) : SimpleVector<T>(arraySize) { }
	// Copy constructor
	SortableVector(SortableVector&);
	// Additional constructor
	SortableVector(SimpleVector<T>& obj) : SimpleVector<T>(obj) { }
	// Find an item
	void sortItems();
};

template <class T>
SortableVector<T>::SortableVector(SortableVector& obj) : SimpleVector<T>(obj) { }

template<class T>
void SortableVector<T>::sortItems()
{
	/*for (int i = 0; i < this->size(); i++)
	{
		if (this->operator[](i) == item)
		{
			return i;
		}
	}*/



	int i, j;
	T key;
	for (i = 1; i < this->size(); i++) {
		key = this->operator[](i);
		j = i - 1;

		
		while (j >= 0 && this->operator[](j) > key)
		{
			this->operator[](j + 1) = this->operator[](j);
			j = j - 1; 
		}
		this->operator[](j + 1) = key;
	}

	return;
}
