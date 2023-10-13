/*Swap Words: Write a program that reverses the order of the two words in
 given text string that has two words separated by a space character.
  For example, if the input is "hello world" the program should output
   "world hello".*/
#include<iostream>
using namespace std;
int main () {
string s, r, t = "";
int c = 0;
cout << "Input 2 words to be reversed\n";
getline(cin, s);
bool frstwrd = true;
while (c < s.length()) {
    if (s[c] ==  ' ') {
        frstwrd = false;        
    } else {
    if (frstwrd) {
        r = r + s[c];
    } else {
        t = t + s[c];
    } }
c++;
} cout << t << " " << r << endl;
}