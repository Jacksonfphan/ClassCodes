/*Write a program that converts a string to uppercase. Use `for` loop to solve the problem.*/
#include<iostream>
using namespace std;
int main () {
    cout << "Enter a sentence \n";
    string s;
    char ch ;
    getline (cin, s);
    for (int c = 0; c < s.length(); c++) {
        if (s[c] >= 97 and s[c] <= 122) {
            ch = s[c];
            ch = toupper(s[c]);
            s[c] = ch;
        }
    }
    cout << s << endl;
}