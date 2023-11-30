/*Write a program that receives a string from the user and removes any duplicate
 characters, leaving only the first occurrence of each character.
  The input string doesn't have any space or special character and only includes lower 
  case alphabet characters. */
#include<iostream>
using namespace std;
int main () {
    string s1;
    cin >> s1;
    string s2 = "";
    for (int c = 0; c < s1.length(); c++) {
        bool nonrepeat = true;
        for (int c2 = 0; c2 < s2.length(); c2++) {
            if (s1[c] == s2[c2]) {
                nonrepeat = false;
                break;
            }
        }
        if (nonrepeat) {
            s2 += s1[c];
        }
    }
    cout << s2 << endl;
}