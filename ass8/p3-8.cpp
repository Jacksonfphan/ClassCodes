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
    int x = s.find(a);
    if (x == -1) {
        cout << "not found\n";

    }else {
        cout << "abc found\n";
    }
 }