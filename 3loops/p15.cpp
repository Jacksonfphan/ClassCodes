/*Create a C++ program that receives a sentence from the user and encrypts it using
 a simple substitution cipher. In this cipher, each character's position is swapped 
 with the position of the next character in the string. If the string has an odd number
  of characters, the last character remains in its original position. 
  Example: Input: "hello world" Output: "ehll oowlrd" */
  #include<iostream>
  using namespace std;
  int main () {
    cout << "Enter a string for encryption\n";
    string s1;
    string s2 = "";
    getline (cin, s1);
    for (int c = 0; c < s1.length(); c+=2) {
        if (c == s1.length() - 1) {
            s2 += s1[c];
        }
        else {
            s2 += s1[c + 1];
            s2 += s1[c];
            }
        }   
    cout << s2 << endl;
  }