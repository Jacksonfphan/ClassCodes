/*Write a C++ program that receives a string of digits as input.
 The program should keep each digit only if it is smaller than all the subsequent
digits in the string. All other digits should be removed.
The order of the remaining digits should be preserved. */
   #include <iostream>
   using namespace std; 
   int main () {
    string s;
    cin >> s;
    string s2 = "";
    for (int c = 0; c < s.length(); c++) {
        bool smaller = true;
        for (int c2 = c+1;c2 < s.length();c2++) {
            if (s[c] >= s[c2]) {
                smaller = false;
                break;
            }
        }
        if (smaller) {
            s2 += s[c];
        }
    }
    cout << s2 << endl;
   }