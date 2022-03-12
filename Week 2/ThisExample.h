#pragma once
#include <iostream>

class ThisExample
{
private:
	int somethingSpecific;
public:
	ThisExample(int somethingSpecific)
	{
		// this->somethingSpecific = somethingSpecific;
		this->setValue(somethingSpecific);
	}

	// Functions
	void setValue(int somethingSpecific)
	{
		this->somethingSpecific = somethingSpecific;
	}
	void printAddressAndValue()
	{
		std::cout << "The object at address " << this << " has value " << this->somethingSpecific << std::endl;
	}
};