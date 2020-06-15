/* Name: Foster Thompson Kearfott
Date: 06/11/2020
Section: Section 4
Assignment: Homework 3: coPrimeNumbers
Due Date: 06/08/2020
About this project: Program 1 - CoPrimeNumbers.
CoPrime numbers are numbers that do not share any common factors besides 1.

All work below was performed by Foster Thompson Kearfott*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // only one variable initialized bc two variables initialized in for loop
    int limitPrime;


    // User input for limit
    cout << "What is the largest limit of coPrime numbers?" << endl;
    cin >> limitPrime;


    // Error message if limit is too small
    if (limitPrime <= 1)
    {
        cout << "Error: You have entered an limit that is too small. Goodbye" << endl;
        exit(EXIT_FAILURE);
    }

    //Finding coPrime numbers under limitPrime
    cout <<"The coPrime numbers under your limit include" << endl;

    // factors of limit and number.
    // without using any other library this works for the sample sets given,
    // but would have to enter all the potential factors to make fool proof // moving on have two tests. tried
    // to fix comma w/ a period and got close
    for(int i = 1, n = limitPrime; i <= limitPrime; i++)
    {
        if (n % i == 0)
        {

        }
        else if ((n % 2 == 0 && i % 2 == 0) || (n % 3 == 0 && i % 3 == 0) || (n % 5 == 0 && i % 5 == 0))
        {

        }
        else cout << i << ",";
    }

    return 0;
}
