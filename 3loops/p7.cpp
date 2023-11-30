/*Write a program that calculates and prints the sum of all prime numbers
 between 1 and 100 using a nested `for` loop.*/
#include <iostream>
using namespace std;
int main()
{
    int primetotal = 2;
    for (int counter = 3; counter < 100; counter++)
    {
        bool prime = true;
        for (int c = 2; c < counter; c++)
        {
            if (counter % c == 0)
            {
                prime = false;
            }
        }
        if (prime)
        {
            primetotal += counter;
        }
    }
    cout << primetotal << endl;
}