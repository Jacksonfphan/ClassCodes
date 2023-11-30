/*Write a C++ program that receives a string of 0s and 1s (a binary representation) 
and calculates its base-10 equivalent, then prints it out. 
Example: Input: "1101" Output: 13 */ 
#include<iostream>
using namespace std;
int main () {
    string s;
    getline(cin, s);
    int baseten = 0;
    int posvalue = 1;
    int l = s.length();
    for (int i = l - 1; i >= 0 ;i--) {
        if (s[i] == '1') {
            baseten += posvalue;
        }
        posvalue *= 2; 
    }
    cout << baseten << endl;
}