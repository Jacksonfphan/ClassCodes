/*File Character Count Write a C++ program that reads a text file named "characters.txt" and counts the total number of characters (including spaces and special characters) in the file.*/
#include<iostream>
#include<fstream>
using namespace std;
int main () {
    ifstream chcount("words.txt");
    int charcount = 0;
    string s;
    while (!chcount.eof()) {
        getline(chcount, s);
        for (int i = 0; i < s.length(); i++) {
            charcount++;
        }
    }
    cout << "The number of characters in this file is " << charcount << endl;
    chcount.close();
}