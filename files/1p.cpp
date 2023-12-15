/*File Reading and Display Write a C++ program that reads content from a text file named "input.txt" and displays it on the console.*/
#include<iostream>
#include<fstream>
using namespace std;
int main () {
    ifstream file("input.txt"); // this puts the text file into the program and stores it in "file"
    
    string s;                   // Defines a string
    
    while (!file.eof()) {       // this means while it is not the end of the file, getline and store it in string s
        
        getline(file, s);       // if the cout of s is not in the while loop, it will only print the first line. 
        cout << s << endl;
    }
    file.close();                  // this closes the file that was being read.
}
