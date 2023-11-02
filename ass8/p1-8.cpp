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
// loop to check letter by letter
for (int c = 0; c < s.length(); c++) {
    // nested loop to check the rest of the letters against the first counter.
    for (int i = 0; i < s.length(); i++) {
        // if the counters are the same, if this isnt here it would check the same letters against each other.
        if (i == c) {
            continue;
        }
        //check that the rest of the letters dont match the designated letter
        else if (s[c] != s[i]) {
            once = true;                                 
        }
        //if they do, make the boolean false and break out of the loop
        else {
            once = false;
            break;
        }
    }
    //if they are unique(only appear once in the string) print them in the terminal
      if (once) {
        cout << s[c] << " ";
     }
  } cout <<endl;
}