/*Pattern with Numbers: Write a C++ program that receives an integer 'n' from the user and prints a pattern as shown below for 'n = 5':
1
22
333
4444
55555
*/
#include<iostream>
using namespace std;
int main () {
    cout << "Enter a number: \n";
    int n;
    cin >> n;
    int c = 1;
    int c2 = 1;
    while (c <= n) {
        while (c2 <= c) {
            cout << c << " ";
            c2++;
        }
        c2 = 1;
        c++;
        cout << endl;
    }
}