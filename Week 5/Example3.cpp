// Overload a template function
#include <iostream>
#include <string>
using namespace std;

template <class T>
T sum(T num1, T num2)
{
	return num1 + num2;
}

template <class T>
T sum(T num1, T num2, T num3)
{
	return num1 + num2 + num3;
}

template <class T>
T sum(T num1, T num2, T num3, T num4)
{
	return num1 + num2 + num3 + num4;
}


//int main()
//{
//	string num1, num2, num3, num4;
//
//	cout << "Enter 4 values separated by spaced: ";
//	cin >> num1 >> num2 >> num3 >> num4;
//
//	cout << "The sum of the first 2 are: " << sum(num1, num2) << endl;
//	cout << "The sum of the first 3 are: " << sum(num1, num2, num3) << endl;
//	cout << "The sum of the first 4 are: " << sum(num1, num2, num3, num4) << endl;
//
//	return 0;
//}