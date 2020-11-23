#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

main () 
{

	std::vector<float> list, temp_mode;
	float mean, median, temp, item;
	int nums, mode;
	cin >> nums;
	
	for (int i=0; i<nums; i++)
	{
		cin >> item;
		list.push_back(item);
	}

	for (int i=0; i<list.size(); i++)
	{
		for (int j=i+1; j<list.size(); j++)
		{
			if (list[j] < list[i])
			{
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	for (int i=0; i<list.size(); i++)
	{
		mean += list[i];
	}

	mean = mean / list.size();

	if (list.size()%2 != 0)
	{
		median = list[list.size()/2];
	}
	
	if (list.size()%2 == 0)
	{
		median = ( list[list.size()/2] + list[(list.size()/2)-1] ) / 2;
	}

	for (int i=0; i<list.size(); i++)
	{
		temp_mode.push_back(1);
	}

	for (int i=0; i<list.size(); i++)
	{
		for (int j=i+1; j<list.size(); j++)
		{
			if (list[j] == -1) 
			{
				continue;
			}
			if (list[i] == list[j])
			{
				temp_mode[i] += 1;
				list[j] = -1;
			}
		}
	}

	mode = 0;
	nums = temp_mode[0];

	for (int i=0;i<temp_mode.size(); i++)
	{
		if (nums < temp_mode[i])
		{
			mode = i;
		}
	}

	mode = list[mode];

	cout << fixed << setprecision(1) << mean << endl;
	cout << fixed << setprecision(1) << median << endl;
	cout << mode << endl;

}