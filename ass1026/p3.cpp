/* Palindrome Pyramid: Implement a C++ program that prints a pattern of palindrome numbers. For 'n = 5', the pattern would look like this:
1
121
12321
1234321
123454321 */
#include<iostream>
using namespace std;
int main () {
    cout << "Enter a number: \n";
    int n;
    cin >> n;
    int c = 1;
    int c2 = 1;
    int c3 = 1;
    while (c <= n) {
        if (c == 1) {cout << c;}
        while (c2 < c) {
            cout <<  c2;
            c2++;
          if (c2 == c) {
                c3 = c2;
                while (c3 <= c && c3 > 0) {
                    cout << c3;
                    c3--;                    
                }
            }  
        }
        c2 = 1;
        c++;
        cout << endl;
    }
}