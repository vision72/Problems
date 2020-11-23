#include <iostream>
#include <vector>

using namespace std;

int main () 
{
	int n; vector<int> remainder;
	cin >> n; int consecutiveOne = 1;
	while (n > 0)
	{
		remainder.push_back(n%2);
		n /= 2;
	}
	for (int i=0; i<remainder.size(); i++)
	{
		if (remainder[i] == 1 and remainder[i] == remainder[i+1])
		{
			consecutiveOne += 1;
		}
		cout << remainder[i] << " ";
	}
	cout << endl;
	cout << consecutiveOne << endl;

	return 0;
}