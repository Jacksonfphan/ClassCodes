/*Write a C++ program that receives a text input and produces its abbreviation.
 The abbreviation should consist of the initials of each word in the input text.
  For instance, if the input is "Computer Science Saddleback College," the program should output "CSSC."*/
  #include<iostream>
  using namespace std;
  int main () {
    string s = "";
    cout << "Enter text to be abbreviated. \n";
    int c = 0;
    getline (cin, s);
    cout << s[0];
    while (c < s.length()) {
        if (s[c] == ' '){
            cout << s[c + 1];
    }
    c++;
    }
    cout << endl;
  }