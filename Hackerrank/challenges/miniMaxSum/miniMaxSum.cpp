#include <iostream>
#include <vector>
using namespace std;

// Mini-Max Sum function
void miniMaxSum(vector<unsigned long long> arr)
{
    unsigned long long min = arr[0], max = arr[arr.size() - 1];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    unsigned long long minSum = 0, maxSum = 0;
    int flagMin = 0, flagMax = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == max && flagMin == 0)
        {
            flagMin = 1;
            continue;
        }
        minSum += arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == min && flagMax == 0)
        {
            flagMax = 1;
            continue;
        }
        maxSum += arr[i];
    }
    cout << minSum << " " << maxSum << endl;
}

int main()
{
    vector<unsigned long long> arr = {769082435, 210437958, 673982045, 375809214, 380564127};
    miniMaxSum(arr);
}
