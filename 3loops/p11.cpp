/*Develop a C++ program that asks the user to enter a string and then uses a `for` loop
 to determine if it's a palindrome (reads the same forwards and backwards). Run the program in 
 a way that number of loop's iteration is approximately equal to half of length of the string. */
 #include<iostream>
 using namespace std;
 int main () {
    cout << "Enter a string for a palindrome check \n";
    string input;
    getline (cin, input);
    int l = input.length();
    bool ispal = true;
    for (int c = 0; c < l / 2; c++) {        
        if (input[c] != input[(l - 1) - c]) { // this takes the length - 1, then subtracts the counter so it checks the end of the string moving backwards.
            ispal = false;
            break;
        }
    } 
    if (ispal) {
        cout << input << " is a palindrome\n";
    } else {
        cout << input << " is not a palindrome\n";
    }
 }