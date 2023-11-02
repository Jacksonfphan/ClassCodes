/*Problem 4: Count Word Occurrences Write a C++ program to receive a text and a word,
 and wordcount how many times the word appears in the text.

Example: Input: Word: "apple" Text: "I love apples, and my friend loves apples too. Apples are great!"
Output: "The word 'apple' appears 3 times."*/
#include<iostream>
using namespace std;
int main () {
    cout << "Enter a sentence\n";
    string input;
    getline (cin, input);
    cout << "Enter word for wordcount\n";
    string searchw;
    cin >> searchw;
    int nowordfound = input.find(searchw);
    int wordcount = 0;   
    string nextw = "";
    for (int c = 0; c < input.length(); c++) {
        if (input[c] == ' ') { 
            if (nextw == searchw) {
            wordcount += 1;             
            }nextw = "";
        } else {
            nextw += input[c];
        }                
    } if (nextw == searchw) {
            wordcount += 1;             
    } if (nowordfound == -1) {
        cout << "not found\n";
    } else {
        cout << "The word " << searchw << " appears " << wordcount << " times\n";
    }
} 