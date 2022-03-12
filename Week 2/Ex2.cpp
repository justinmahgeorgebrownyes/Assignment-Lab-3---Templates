#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std;

//int main()
//{
//	const int N_DIVISIONS = 4;
//
//	cout << "Enter the main office's budget request: ";
//	double amount;
//	cin >> amount;
//
//	// Call the static main office function in the budget class.
//	Budget::mainOffice(amount);
//
//	// Create instances of the budget class
//	Budget divisions[N_DIVISIONS];
//
//	// Get the budget for each division
//	for (int i = 0; i < N_DIVISIONS; i++)
//	{
//		double bud;
//
//		cout << "Enter the budget request for division " << (i + 1) << ": ";
//		cin >> bud;
//		divisions[i].addBudget(bud);
//	}
//
//	// Display the budget request for each division
//	cout << setprecision(2) << showpoint << fixed;
//	cout << "\nHere are the divisions budget requests: \n";
//	for (int i = 0; i < N_DIVISIONS; i++)
//	{
//		cout << "Division " << (i + 1) << "\t$";	// \t will tab the cursor
//		cout << divisions[i].getDivBudget();
//		cout << endl;
//		// Add stuff soon here...
//	}
//
//	// Display the total corporate budget
//	cout << "Total budget requests (including main office):\t$";
//	cout << divisions[2].getCorpBudget() << endl;
//
//	return 0;
//}