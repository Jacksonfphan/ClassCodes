/*Find Substring: Create a C++ program that asks the user to enter a text string and a search term.
 Use the find function to check if the search term is present in the input string.
 Print a message indicating whether the search term was found or not. You can use str.find(str2) to get the location of str2 in the str.*/
 #include<iostream>
 using namespace std;
 int main () {
    cout << "Please enter a sentence.\n";
    string sentence = "";
    getline(cin, sentence);
    cout << "Search term? \n";
    string search = "";
    cin >> search;
    int found = sentence.find(search);
    if (found == -1) {
        cout << "Not found \n";

    }    else  {
        cout << "Found at " << found << endl;
    }
    

 }