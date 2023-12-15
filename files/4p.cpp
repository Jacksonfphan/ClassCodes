/*File Line Count Create a C++ program that counts and displays the number of lines in a text file named "lines.txt". */
#include<iostream>
#include<fstream>
using namespace std;
int main  () {
    ifstream line("input.txt");
    int linecount = 0;
    string s;
    while (!line.eof()) {
        getline (line, s);
        linecount++;
    }
    cout << linecount << endl;
    line.close();
}
