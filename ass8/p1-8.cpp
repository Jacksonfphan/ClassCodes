/*Problem 1: Count Single Letters Write a C++ program that receives a text
 and prints out all the letters in the text that have only appeared once.

Example: Input: "hello world" Output: "h e r d w"*/
#include<iostream>
using namespace std;
int main () {
cout << "Enter a sentence \n";
string s;
getline(cin, s);
char w;
bool once;
for (int c = 0; c < s.length(); c++) {
    for (int i = 0; i < s.length(); i++) {
        if (i == c) {
            continue;
        }else if (s[c] != s[i]) {
            once = true;                                 
        }else {
            once = false;
            break;
        }
    }
     if (once) {
        cout << s[c] << " ";
     }
  } cout <<endl;
}