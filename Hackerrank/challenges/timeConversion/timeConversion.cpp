#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s)
{
    int hours = stoi(s.substr(0, 2));
    int mints = stoi(s.substr(3, 4));
    int secon = stoi(s.substr(6, 7));
    string action = s.substr(8, 9), format = "";
    if (action == "AM")
    {
        if (hours == 12)
        {
            hours = 00;
        }
    }
    else if (action == "PM")
    {
        if (hours < 12)
        {
            hours += 12;
        }
    }
    string smint = "", ssec = "";
    if (mints < 10)
    {
        smint += "0";
    }
    if (secon < 10)
    {
        ssec += "0";
    }
    if (hours > 9)
    {
        format += to_string(hours) + ":" + smint + to_string(mints) + ":" + ssec + to_string(secon);
    }
    else
    {
        format += "0" + to_string(hours) + ":" + smint + to_string(mints) + ":" + ssec + to_string(secon);
    }
    // cout << hours << endl;
    return format;
}

int main(int argc, char const *argv[])
{
    cout << timeConversion(string{"07:05:45PM"}) << endl;
    cout << timeConversion(string{"12:05:45AM"}) << endl;
    cout << timeConversion(string{"12:00:00AM"}) << endl;
    return 0;
}
