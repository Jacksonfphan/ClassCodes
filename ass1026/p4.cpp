/*Character Pattern: Write a program to print the following pattern
 using nested loops:
A
BB
CCC
DDDD
EEEEE */
#include<iostream>
using namespace std;
int main () {
cout << "Enter a number: \n";
    int n;
    cin >> n;
    int c = 1;
    int c2 = 1;
    char c3 = 'A';
    while (c <= n) {
        while (c2 <= c) {
            cout <<  c3 << " ";
            c2++;            
        }
        c3++;
        c2 = 1;
        c++;
        cout << endl;
    }
}