/*Write a C++ program that receives a decimal number and prints its binary representation
as a string.
Example: Input: 10 Output: "1010" */
#include<iostream>
using namespace std;
int main () {
int input;
int binary = 1;
cin >> input;
string s = "";
while (binary <= input) {
    binary *= 2;
}
    binary /= 2;
while (input != 0) {
    if (input > binary) {
        s += "0";
    }
    else {
        s += "1";
    input -= binary;
    }    
    binary /=2;
}
cout << s << endl;
}