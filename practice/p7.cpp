/*Full Name Input: Design a program to read both the first and last names of a person into a single string variable.
 Print out the full name on the screen.
  Implement the program using both cin and getline for input to understand the differences
   in handling spaces and multiple words*/
   #include<iostream>
   using namespace std;
   int main () {
    cout << "Please enter your full name. \n";
    string name = "";
    getline(cin, name);
    cout << name << endl;
   }