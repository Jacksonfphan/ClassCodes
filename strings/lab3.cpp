/*Longest Word: Write a program that receive a sentence and prints out
 length of the longest word in the string. The text has no punctuation and
  only words each separated by one space.
Can you change the program to print out the longest word itself too? */
#include<iostream>
using namespace std;
int main () {
    string input, word1, longw = "";
    int count = 0;
    cout << "Input a sentence\n";
    getline(cin, input);
    while (count < input.length()) {
        if (input[count] == ' ') {
            if (word1.length() > longw.length()) {
                longw = word1;                                                                           
            } word1 = "";
        }else {
            word1 += input[count];
        }
    count++;
    }
    if (word1.length() > longw.length()) {
        longw = word1; 
     
}cout << longw << endl;
}