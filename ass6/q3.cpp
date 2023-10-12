/*Develop a C++ program that accepts a text input with multiple words and prints the index
 (location) of the first word that starts with the character 'a'. If there is no word starting
  with 'a', the program should print "not found."*/
  #include<iostream>
  using namespace std;
  int main () {
    cout << "Enter a line of text \n";
    string s, f = "";
    getline(cin, s);
    int c = 0;
    int p = 0;
    bool aword = true;
    while (c < s.length()) {
        
        if (s[c] == ' ') {
         if (s[c+1] == 'a') {
            p = s[c+1];
            f = f + s[c+1];                    
        }
        }
        c++;    
    }
    cout << "'a' word is found at " << p << endl;
    }
   
      