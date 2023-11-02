/*Problem 3: Check for 'abc' Write a C++ program to receive a text and check if
 the text includes the string 'abc' as part of the sentence or any of its words. */
 #include<iostream>
 using namespace std;
 int main () {
    cout << "Enter a string\n";
    string s;
    getline(cin, s);
    bool abc = true;
    string a = "abc";
    // set integer to the index of 'abc' in the input string
    int x = s.find(a);
    // if the search term (abc in this case) isn't found, the integer will get indexed as -1. this will always happen.
    if (x == -1) {
        cout << "not found\n";

    }
    // since the integer of the find function was not -1, that means abc was found and print that it was found.
    else {
        cout << "abc found\n";
    }
 }