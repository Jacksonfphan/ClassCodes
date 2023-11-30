/*Write a C++ program that receives a 16-character string from the user 
and prints it as a 4x4 matrix.*/
#include<iostream>
using namespace std;
int main () {
    cout << "Enter a 16 ch string \n";
    string s;
    getline (cin, s);
    int row = 4;
    int col = 4;
    int c = 0; // counter for rows
    int c3 = 0; // counter for entire string
    int l = s.length();
    while (c3 < l) {
        while (c < row) {
            int c2 = 1; // counter for columns, needs to be reset every row
            cout << s[c3] << " "; // outputs letter in the respective positions of the string
            c3++; // need to add to the string counter every output
            while (c2 < col) {
                cout << s[c3] << " ";
                c2++;
                c3++; // same as above for row output, needs to add every time so the output is continuous.
        }
        cout << endl;
        c++;
    }
  }
}
