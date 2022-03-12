#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
public:
	// Constructors
	Circle()
	{
		radius = 10;
	}

	Circle(double r) // Overloaded constructor -- Has arguments
	{
		radius = r;
	}

	// Behaviours (aka Functions)
	void setRadius(double);
	double getRadius() { return radius; }
	double calcArea()
	{
		// Area of a circle is PI*r^2
		return 3.14 * pow(radius, 2);
	}

	// Properties (aka Variables)
private:
	double radius;
};

void Circle::setRadius(double r)
{
	if (r > 0)
	{
		radius = r;
	}
	else
	{
		cout << "Enter a number greater than 0!\n";
	}
}

//int main()
//{
//	Circle circle1, circle2(2.5);
//
//	circle1.setRadius(1);
//	// circle2.setRadius(2.5);
//
//	// Print out the area
//	cout << "The area of circle 1 is " << circle1.calcArea() << endl;
//	cout << "The area of circle 2 is " << circle2.calcArea() << endl;
//
//	return 0;
//}