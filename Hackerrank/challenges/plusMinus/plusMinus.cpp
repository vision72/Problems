#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int number;
    float counterPositive, counterNegative, counterZero;
    std::cin >> number;
    float theList[number];
    for (int i=0; i<number; i++) 
    {
        std::cin >> theList[i];
        if (theList[i] > 0)
        {
            counterPositive+=1;
        }
        else if (theList[i] < 0)
        {
            counterNegative+=1;
        }
        else
        {
            counterZero+=1;
        }
    }
    
    counterPositive = counterPositive / float(number);
    counterNegative = counterNegative / float(number);
    counterZero = counterZero / float(number);

    std::cout << std::setprecision(6);
    std::cout << std::fixed << counterPositive << '\n';
    std::cout << std::fixed << counterNegative << '\n';
    std::cout << std::fixed << counterZero << '\n';

    return 0;
}
