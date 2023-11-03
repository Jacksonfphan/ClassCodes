/*write program using for loop to check if a number is prime*/
#include<iostream>
using namespace std;
int main () {
    cout << "Enter prime number check\n";
    int pri;
    cin >> pri;
    bool prime = true;
    for (int c = 2; c < pri; c++) {
        if (pri % c == 0) {
            prime = false;
        }
    }
    if (prime == false) {
        cout << "Number is not prime\n";
    } else {
        cout << "Number is prime\n";
    }
}