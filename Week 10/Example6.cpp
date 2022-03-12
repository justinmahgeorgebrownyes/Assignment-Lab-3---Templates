// Tower of Hanoi
#include <iostream>
#include <string>
using namespace std;

// Function prototype
void moveDisks(int, string, string, string);	

int main()
{
	moveDisks(16, "peg 1", "peg 2", "peg 3");
	cout << "All disks have been moved!";

	return 0;
}

void moveDisks(int n, string source, string dest, string temp)
{
	if (n > 0) // <-- Base case
	{
		// Move n-1 disks from source ot temp use dest as a temp peg
		moveDisks(n - 1, source, temp, dest);

		// Move a dist from source to dest
		cout << "Move a disk from " << source << " to " << dest << endl;

		// Move n-1 disks from temp to dest using source as the temp peg
		moveDisks(n - 1, temp, dest, source);
	}
}