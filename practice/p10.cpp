/*Replace Character: Create a program that receives a text string from the user and replaces all occurrences of a specified character
 with another character of the user's choice. Print the modified string.*/
 #include<iostream>
 using namespace std;
 int main () {
    string input = "";
    char inp;
    char r;
    int c = 0;
    cout << "Enter a sentence for single character replacement. \n";
    getline(cin, input);
    cout << "Character to be replaced?\n";
    cin >> inp;
    cout << "Character replacing?\n";
    cin >> r;
    while (c < input.length()) {
        if (input[c] == inp) {
            input[c] = r;
        }
        c++;
    }

cout << input << endl;

 }