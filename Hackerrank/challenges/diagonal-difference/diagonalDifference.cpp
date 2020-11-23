#include <iostream>
#include <stdlib.h>

using namespace std;

main ()
{
	
	int rc, sum1, sum2;
	cin >> rc;
	int arr[rc][rc];
	
	for (int i=0; i<rc; i++)
	{
		for (int j=0; j<rc; j++)
		{
			cin >> arr[i][j]; 
		}
	}

	for (int i=0; i<rc; i++)
	{
		for (int j=0; j<rc; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i=0; i<rc; i++)
	{
		sum1 += arr[i][i];
		sum2 += arr[rc - 1 - i][i];
	}

	cout << abs(sum1 - sum2) << endl;

}