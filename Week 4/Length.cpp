#include "Length.h"

Length operator+(Length a, Length b)
{
	return Length(a.len_inches + b.len_inches);
}

Length operator-(Length a, Length b)
{
	return Length(a.len_inches - b.len_inches);
}

bool operator<(Length a, Length b)
{
	return a.len_inches < b.len_inches;
}

bool operator>(Length a, Length b)
{
	return a.len_inches > b.len_inches;
}

bool operator==(Length a, Length b)
{
	return a.len_inches == b.len_inches;
}

Length Length::operator++() // Prefix mode
{
	// ++b; Incrementing b first, then doing other things with it
	len_inches++;
	return *this;
}

Length Length::operator++(int)	// Postfix mode
{
	// b++; I can use b first, then increment is after
	Length temp = *this;
	len_inches++;
	return temp;
}

ostream& operator<<(ostream& out, Length a)
{
	out << "THIS IS MY MEASUREMENTS: " << a.getFeet() << " feet, " << a.getInches() << " inches";
	return out;
}

istream& operator>>(istream& in, Length& a)
{
	int feet, inches;
	cout << "Enter feet: ";
	in >> feet;
	cout << "Enter inches: ";
	in >> inches;

	a.setLength(feet, inches);
	return in;
}