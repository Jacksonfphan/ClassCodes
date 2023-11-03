// User Greeting: Create a C++ program that prompts the
// user for their name and displays a personalized
// welcome message.
#include<iostream>
using namespace std;
int main () {
    cout << "What is your name? \n";
    string name;
    cin >> name;
    cout << "Hello " << name << "\n";
}