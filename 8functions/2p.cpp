/*Create a C++ program that defines a function named sayHi which takes a string
 parameter (the name) and greets the user with "Hello, [Name]!" In the main() function,
  repeatedly ask the user for a name until the user enters "end". Use the sayHi
   function to greet each entered name. */
#include<iostream>
using namespace std;
void sayhi(string name) {
    cout << "Hello, " << name << "!";
}
int main () {
    string n;
    do {
        cout << "Enter a name or end to stop program\n";
        cin >> n;
        if (n == "end") {
            break;
        }
        sayhi(n);
    } while (n != "end");
}