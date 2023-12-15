/*File Copying Develop a C++ program that copies the contents of one text file ("source.txt") to another file ("destination.txt"). */
#include<iostream>
#include<fstream>
using namespace std;
int main () {
    string source;
    ifstream file1("source.txt");
    ofstream file2("destination.txt");
    while (!file1.eof()) {
        getline (file1, source);
        file2 << source << endl;

    }
    file1.close();
    file2.close();
}