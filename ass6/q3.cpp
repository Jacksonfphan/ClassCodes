/*Develop a C++ program that accepts a text input with multiple words and prints the index
 (location) of the first word that starts with the character 'a'. If there is no word starting
  with 'a', the program should print "not found."*/
  #include<iostream>
  using namespace std;
  int main () {
    cout << "Enter a line of text \n";
    string input = "";
    getline(cin, input);
    int c = 0;
    bool aword = true;
    while (c < input.length()) {
        if (input[0] == 'a') {
          break;
        }
        else if (input[c] == ' ' && input[c+1] == 'a') {         
          aword = true;
          c = c+1;
           break;                                          
        } else {
          aword = false;
        }
        c++;
        }    
    if (aword) {
      cout << "'a' word is found at " << c << endl;
      } else {
        cout << "not found \n";
      }
    
    }
  
   
      