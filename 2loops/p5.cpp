/*Chessboard Pattern: Create a program to print a chessboard pattern of 'n' rows and 'm' columns, with alternating 'X' and 'O' characters. The user inputs 'n' and 'm'.*/
#include<iostream>
using namespace std;
int main (){
    int r = 1;
    int c = 1;
    char ch;
    while (r < 11) {
        if (r % 2) {
            ch = 'X';
        } else {
            ch = 'O';
        }
        while (c < 11) {
            cout << ch;
            c++;
        }
        r++;
    }
}