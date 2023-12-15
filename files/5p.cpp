/*File Word Count Develop a C++ program that reads a text file named "words.txt" and counts the total number of words in it. Assume every word is separated by one space characters from other words and there are no other punctuations!*/
#include<iostream>
#include<fstream>
using namespace std;
int main (){
    ifstream words("words.txt");
    string s;
    int wordcount = 0;
    while (!words.eof()) {
        getline(words, s);
        for (int i = 0; i < s.length()-1; i++) {
            if (s[i] == ' ') {
                wordcount++;
            }
        }
        wordcount++;
    }
    cout << "This file has " << wordcount << " words\n";
    words.close();
}