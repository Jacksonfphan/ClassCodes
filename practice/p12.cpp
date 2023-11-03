/*Palindrome Check: Develop a program that checks if a given text string is a palindrome.
 A palindrome is a word, phrase, or sequence that reads the same backward as forward. 
Can you write the same program to check if a given text is a palindrome ignoring spaces and punctuation?*/
#include<iostream>
using namespace std;
int main () {
    string input;
    cout << "Enter a palindrome check. \n";
    getline(cin, input);
    int start = 0;
    int end = input.length() - 1;
    bool pal = true;
    while (start < end) {
        if (input[start] != input[end]){
        pal = false;
        }
        start++;
        end--;
    }    
    if (pal) {
        cout << "Palindrome" << endl;
    } else  {
        cout << "Not Palindrome" << endl;
    }
}