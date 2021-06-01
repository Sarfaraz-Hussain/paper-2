#include <bits/stdc++.h>
using namespace std;

void findLeader(vector<int> v)
{
	int leader = v.back();

	std::vector<int> resVector;
	resVector.push_back(leader);
	int n = v.size() - 2;
	for (int i = n; i >= 0; i--)
	{
		if (v[i] > leader)
		{
			leader = v[i];
			resVector.push_back(leader);
		}
	}

	for (int i = resVector.size() - 1; i >= 0; i--)
		cout << resVector[i] << " ";
	cout << endl;
}

int main()
{
	std::vector<int> v = {16, 17, 4, 3, 5, 2};
	findLeader(v);
	return 0;
}