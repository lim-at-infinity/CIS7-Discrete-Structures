#include <iostream>
using namespace std;

int moves(0);
void Hanoi(int n, char a, char b, char c);

int main()
{
	int discs;
	cout << "Enter the number of discs: ";
	cin >> discs;
	Hanoi(discs, 'A', 'B', 'C');
	cout << "It took " << moves << " moves. " << endl;

	return 0;
}

void Hanoi(int n, char a, char b, char c)
{
	moves++;
	if (n == 1)
	{
		cout << "Move Disk " << n << " from " << a << " to " << c << endl;
		return;
	}

	Hanoi(n - 1, a, c, b);
	cout << "Move Disk " << n << " from " << a << " to " << c << endl;
	Hanoi(n - 1, b, a, c);
}