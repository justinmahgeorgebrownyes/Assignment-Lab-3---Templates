#pragma once

class NumberArray
{
private:
	double* aPtr;
	int arraySize;
public:
	// Function prototypes
	NumberArray();							// Default constructor
	NumberArray(NumberArray&);				// Copy constructor
	NumberArray(int size, double value);
	~NumberArray();							// Destructor

	void print() const;
	void setValue(double value);

};