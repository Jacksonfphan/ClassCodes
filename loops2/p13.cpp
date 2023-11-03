/*Develop a program that calculates and prints the factorial of a number using a `for` loop.*/
#include<iostream>
using namespace std;
int main () {
    cout << "Enter a number for factorial \n";
    int n;
    cin >> n;
    double fact = 1;
    for (int c = 1; c <= n; c++) {
        fact = fact * c;
    } 
    cout << fact << endl;
} 