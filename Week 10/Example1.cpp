// Simple recursive function
#include <iostream>
using namespace std;

// Function prototype
void message(int);

//int main()
//{
//	message(3);
//	return 0;
//}

void message(int times)
{
	cout << times << endl;

	if (times > 0)
	{
		cout << "Message " << times << endl;
		message(times - 1);
	}
}