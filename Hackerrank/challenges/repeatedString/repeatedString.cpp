#include <iostream>
#include <cmath>
using namespace std;

// The greatest common divisor
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return gcd(y, (x%y));
}

// The repeatedString function below, is based on ratio and proportions
// Proved this technique is efficient
long repeatedString(string s, long n)
{
    if (s.size() == 1)
    {
        if (s[0] == 'a')
        {
            return n;
        }

        else
        {
            return 0;
        }
    }
    int digits = s.size(), occur = 0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] == 'a')
        {
            occur++;
        }
    }
    cout << endl << "------- orror " <<  occur << "-------" << endl;
    // int multiple = gcd(digits, n);
    long multiple = round(n/digits);
    cout << endl << "------- multiple " <<  multiple << "-------" << endl;
    long q = multiple * occur;
    cout << endl << "------- q " <<  q << "-------" << endl;
    if (multiple * digits < n)
    {
        int difference = n - (multiple * digits);
        int extra=0;
        for (int i=0;i<difference; i++)
        {
            if(s[i] == 'a')
                extra++;
        }
        cout << endl << "------- (occur * multiple) + extra " << (occur * multiple) + extra << "-------" << endl;
        return (occur * multiple) + extra;
    }
    else
    {
        cout << endl << "------- (occur * multiple) " << (occur * multiple) << "-------" << endl;
        return (occur * multiple);
    }
}

// The repeatedString function below, did not performed really good. time complexity ~really high

// long repeatedStringDelayed(string s, long n)
// {
//     long counter = 0;
//     long i = 0;

//     if (s.size() == 1)
//     {
//         if (s[0] != 97)
//         {
//             return 0;
//         }

//         else
//         {
//             return n;
//         }
//     }

//     if (s.find('a') != std::string::npos)
//     {
//         while (i < n)
//         {
//             for (auto ch : s)
//             {
//                 if (i == n)
//                 {
//                     break;
//                 }

//                 if (ch == 97)
//                     counter++;
//                 i++;
//             }
//         }
//         return counter;
//     }
//     else
//     {
//         return 0;
//     }
// }

int main()
{
    string s;
    getline(cin, s);

    long n;
    cin >> n;

    long result = repeatedString(s, n);

    cout << result << "\n";

    return 0;
}