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
        // if there is a break (a space in this case), check the first letter of the name against the previous one for alphabetical order
        if (s[c] == ' ') {
            // if the next one comes next alphabetically, store that letter in n
            if (s[c + 1] > n) {
                n = s[c+1];
            } 
            // otherwise the names are not sorted, break out of the loop and print as such
            else {
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