#include <iostream>
#include <vector>
using namespace std;

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar)
{
    int max = 0, counter = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            counter = 1;
            continue;
        }
        if (ar[i] == max)
        {
            counter++;
        }
    }
    return counter;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 2, 1, 3};
    cout << birthdayCakeCandles(arr) << endl;
    return 0;
}
