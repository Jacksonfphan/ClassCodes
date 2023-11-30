/*Write a program that asks the user for their email address and 
extracts the domain name from it. */
#include<iostream>
using namespace std;
int main () {
    cout << "Enter your name\n";
    string email;
    getline (cin, email);
    string domain = "";
    for (int c = 0; c < email.length(); c++) {
        if (email[c] == '@') {
            c++;
            for (c; c < email.length(); c++) {
                domain += email[c];
            }
        }
    }
    cout << domain << endl;
}