// Factorial
#include <iostream>
using namespace std;

// Function prototype
unsigned long long int factorial(unsigned long long int);

//int main()
//{
//	long long int number;
//
//	cout << "Enter an integer value and I will display its factorial: ";
//	cin >> number;
//	cout << "The factorial of " << number << " is " << factorial(number) << endl;
//
//	return 0;
//}

/*
	Factorial
	---------
	Ex: 5! = 5 x 4 x 3 x 2 x 1 = 120

	5! = 5 x 4! | 4! = 4 x 3 .........

	n! = n x (n-1)!

	NOTE: 0! = 1 <-- BASE CASE!
*/

unsigned long long int factorial(unsigned long long int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}