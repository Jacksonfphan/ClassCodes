/*Half Pyramid of Numbers: Write a C++ program that prints a half pyramid pattern using numbers as shown below for a number received from the user:
1
12
123
1234
12345
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
            cout <<  c2;
            c2++;
        }
        c2 = 1;
        c++;
        cout << endl;
    }
}