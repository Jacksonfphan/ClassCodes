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
        // when you hit a space, this checks if the stored word from the string is the search word. if it is, add 1 to the word counter and reset the next word to be compared.
        if (input[c] == ' ') { 
            if (nextw == searchw) {
            wordcount += 1;             
            }nextw = "";
        }
        // this stores the word to be compared to the search word
         else {
            nextw += input[c];
        }                
    }
    // have to run the inner loop one extra time because there is not a space at the end of string, this does no account for punctuation
     if (nextw == searchw) {
            wordcount += 1;             
    } 
    // same integer logic as last problem, using the search function it is easy to deduce if there are no instances of the search word in the input string.
    if (nowordfound == -1) {
        cout << "not found\n";
    } else {
        cout << "The word " << searchw << " appears " << wordcount << " times\n";
    }
} 