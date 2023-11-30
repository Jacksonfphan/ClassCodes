// Write a C++ program that receives an integer from the user and calculates the sum of its digits.
#include<iostream>
using namespace std;
int main () {
    cout << "Enter a number for digit sum calculation \n";
    int x, y, z = 0;
    cin >> x;
    int c = 0;
    while (x != 0) { 
        y = x % 10;
        x = x/10;
        z += y;
    }
    cout << z << endl;
}