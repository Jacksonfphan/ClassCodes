/*Find Substring: Create a C++ program that asks the user to
 enter a text string and a search term. Use the find function 
 to check if the search term is present in the input string.
  Print a message indicating whether the search term was found or not.
You can use str.find(str2) to get the location of str2 in the str. */
#include<iostream>
using namespace std;

int main () {
    cout << "Enter a string of text please.\n";
    string s1, s2;
    getline(cin, s1);
    cout << "Enter a search term." << endl;
    cin >> s2;
    int found = s1.find(s2);

    
}