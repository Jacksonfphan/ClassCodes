/*Count Occurrences: Write a program that takes a text string and a character as input and counts the number
 of occurrences of that character within the string.*/
 #include<iostream>
 using namespace std;
 int main () {
    string input = "";
    cout << "Enter a sentence to count the character of your choosing. \n";
    getline(cin, input);
    cout << "Character?\n";
    char c ;
    cin >> c;
    int counter = 0;
    int ch = 0;
    while (counter < input.length()) {
        if (input[counter] == c) {
            ch++;
        }
        counter++;
    } cout << c << " occurred " << ch << " times.\n";
 }