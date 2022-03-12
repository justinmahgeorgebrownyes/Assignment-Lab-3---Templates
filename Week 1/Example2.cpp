#include <iostream>
using namespace std;

void doSomething(double[]);
void printArray(double[]);

//int main()
//{
//	int x = 10;
//	int* ptr;
//	double numbers[] = { 10, 20, 30, 40, 50 };
//
//	cout << numbers << endl;
//
//	printArray(numbers);
//
//	cout << endl << endl << endl;
//
//	doSomething(numbers);
//
//	printArray(numbers);
//
//	// cout << *ptr << endl;
//
//	return 0;
//}

void doSomething(double nums[])
{
	for (int i = 0; i < 5; i++)
	{
		nums[i] *= 2;
	}
}

void printArray(const double nums[]) // The same as pass in a double* nums
{
	for (int i = 0; i < 5; i++)
	{
		cout << nums[i] << endl;
	}
}