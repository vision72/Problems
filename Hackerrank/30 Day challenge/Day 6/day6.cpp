#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () 
{
	
	std::vector<string> str;
	std::vector<string> outcome;
	string temp, odd, even;
	int nums;
	cin>>nums;

	for (int i=0; i<nums; i++)
	{
		cin >> temp;
		str.push_back(temp);
	}
	
	for (int i=0; i<str.size(); i++)
	{
		even.push_back(str[i].at(0));
		for (int j=1; j<str[i].size(); j++)
		{
			if (j%2 == 0)
			{
				even.push_back(str[i].at(j));
				continue;
			}
			if (j%2 != 0)
			{
				odd.push_back(str[i].at(j));
				continue;
			}
		}
		outcome.push_back(even + " " + odd);
		even = ""; odd = "";
	}
	
	for (auto it : outcome)
	{
		cout << it << endl;
	}

	return 0;

}