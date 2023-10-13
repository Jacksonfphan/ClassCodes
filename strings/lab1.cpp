/*Singular Reverse: Write a program that reverses each word in a given text
 string that has two words separated by a space character. For example,
  if the input is "hello world" the program should output "olleh dlrow"*/
  #include<iostream>
  using namespace std;

  int main (){
    cout << "Enter text to be reversed\n";
    string s; 
    getline (cin, s);
    string r = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == ' ') {
           cout << r + " ";
            r = "";
        } else {
            r = s[i] + r;
        }     
        i++;
        }                    
cout << r << endl;
  }