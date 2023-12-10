/*Write a C++ program that defines a function called printNumbers which takes an integer parameter n and prints all the numbers from 1 
to n. In the main() function, ask the user for a number and call the printNumbers function to display the sequence.*/
#include<iostream>
using namespace std;
void printNum(int x) {
    for (int i = 1; i <= x; i++) {
        cout << i << " ";
    }
}
int main () {
    cout << "Enter number to print all #'s to input\n";
    int y;
    cin >> y;
    printNum(y);
    cout << endl;
}