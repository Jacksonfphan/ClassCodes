//Create a C++ program that takes a text input containing two words and replaces all 
//the characters of the second word with '*'. For example, if the input is "hello world," 
//the program should output "hello *****."
#include<iostream>
using namespace std;
int main (){
    cout << "Input 2 words please. \n";
    string s;
    string word = "";
    string star = "";
    getline (cin, s);
    int c = 0;
    bool wrdf = true;
    while (c < s.length()) {
        if (s[c] == ' ') {
            wrdf = false;
        } else {
            if (wrdf) {
                word = word + s[c];
            }else {
            while (c < s.length()){
                star = star + "*";
                c++;
            }            
        }
        }
        c++;
    } cout << word + " " + star << endl;
}