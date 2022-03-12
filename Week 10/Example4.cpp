// Fibonacci Numbers
#include <iostream>
using namespace std;

int fib(int);

//int main()
//{
//	int fibNum;
//
//	cout << "Enter which Fibonacci number you want: ";
//	cin >> fibNum;
//
//	cout << "Fibonacci number " << fibNum << " is " << fib(fibNum) << endl;
//
//	//cout << "The first 20 Fibonacci numbers are: \n";
//	//for (int i = 0; i < 20; i++)
//	//{
//	//	cout << fib(i) << " ";
//	//}
//
//	cout << endl;
//
//	return 0;
//}

/*
	Fibonacci
	---------

	5th fib # = 3rd + 4th fib #

	17th fib # = 15th + 16th fib #

	nth fib # = (n-2) fib + (n-1) fib

	Known quantities (BASE CASE!):
	n = 0 ==> 0
	n = 1 ==> 1
*/

int fib(int n)
{
	if (n <= 0)
	{
		return 0;		// Base case
	}
	else if (n == 1)
	{
		return 1;		// Base case
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}