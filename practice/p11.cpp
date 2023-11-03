/*Reverse String: Write a program that reverses a given text string. For example, if the input is "hello," the program should output "olleh."*/
#include<iostream>
using namespace std;
int main () {
    string input, reverse;
    cout << "Enter a string to get reversed. \n";
    getline(cin, input);
    int counter = 0;
    while (counter < input.length()) {
        reverse = input[counter] + reverse;
        counter++;
    }
    cout << reverse << endl;
}