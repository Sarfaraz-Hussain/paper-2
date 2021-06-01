#include <bits/stdc++.h>
using namespace std;


void printPattern(int n)
{
	for (int i = 1; i <=  n; i++)
	{
		for (int j = 1; j <= 2 * n; j++)
		{
			// left part of pattern
			if (i < j)
				cout << " ";
			else
				cout << "*";

			// Right part of pattern
			if (i <= ((2 * n) - j))
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j <= (2 * n); j++)
		{
			// Left part of pattern
			if (i > (n - j + 1))
				cout << " ";
			else
				cout << "*";

			// Right part of pattern
			if ((i + n) > j)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}


int main()
{
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}