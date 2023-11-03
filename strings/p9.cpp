/*Count Occurrences: Write a program that takes a text
 string and a character as input and counts the number
  of occurrences of that character within the string.*/
#include<iostream>
using namespace std;
int main (){
    string s1;
    char c;
    getline(cin, s1);
    cin >> c;
    int count = 0;
    int total = 0;
    while (count < s1.length()) {
        if (s1[count] == c){
            total++;
        }
        count++;
    }
    cout << total << endl;

    
    }
