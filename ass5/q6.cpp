/*Write a program that asks the user for a positive 
integer and uses a `while` loop to calculate and print 
the sum of its digits.*/
#include<iostream>
using namespace std;
int main (){
    int x;
    int total=0;
    int y;
    cout << "Enter a number for the sum of its digits. \n";
    cin >> x;
    while (x != 0){
        total += x % 10;
        x /= 10;
    }
        cout << total << "\n";
}