// Shipping Charges.cpp : This file contains the 'main' function. Program execution begins and ends there.
// I am adding a comment here

#include <iostream>

int main()
{
    int miles, per_500;
    float weight, charge;
    float rate = 0.0;

    std::cout << "What is the weight of the package? \n";
    std::cin >> weight;
    std::cout << "How many miles does the package have to travel? \n";
    std::cin >> miles;

    if (miles >= 10 && miles <= 3000)
    {
        if (weight > 0 && weight <= 2)
        {
            rate = 1.1F;
        }
        else if (weight > 2 && weight <= 6)
        {
            rate = 2.2F;
        }
        else if (weight > 6 && weight <= 10)
        {
            rate = 3.7F;
        }
        else if (weight > 10 && weight <= 20)
        {
            rate = 4.8F;
        }
        else
        {
            std::cout << "Unaccecptable weight value \n";
            return 0;
        }
    }
    else
    {
        std::cout << "We do not ship packages for distances under 10 or over 30 miles \n";
        return 0;
    }

    if ((miles % 500) > 0)
    {
        per_500 = miles / 500 + 1;
    }
    else
    {
        per_500 = miles / 500;
    }

    charge = rate * per_500;

    std::cout << "The cost for shipping the package is " << charge << "\n";


}

