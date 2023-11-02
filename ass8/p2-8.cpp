/* Sort First Names Create a program that receives a text containing first names separated by spaces and prints 
"sorted" if they are alphabetically in ascending order.*/
#include<iostream>
using namespace std;
int main () {
    cout << "Enter list of names\n";
    string s; 
    getline (cin, s) ;
    char n;
    bool sort = true;
    n = s[0];
    for (int c = 0; c < s.length(); c++) {
        if (s[c] == ' ') {
            if (s[c + 1] > n) {
                n = s[c+1];
            } else {
                sort = false;
                break;
            }
        }
    } if (sort) {
        cout << "sorted\n" ;
    } else  {
        cout << "not sorted\n";
    }
    
}