/*Write a program that takes a string as input and uses a `for` loop to remove all spaces from the string.
 Display the modified string.*/
#include<iostream>
using namespace std;
int main () {
cout << "Enter a sentence\n";
string s = "";
getline(cin, s);
string nosp = "";
for (int c = 0; c < s.length(); c++){
    if (s[c] != ' ') {
      nosp += s[c];  
    }
  }
  cout << nosp << endl;
}