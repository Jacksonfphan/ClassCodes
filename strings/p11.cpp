/*Reverse String: Write a program that reverses a given
 text string. For example, if the input is "hello,"
  the program should output "olleh."*/
  #include<iostream>
  using namespace std;

  int main (){
   string s1;
   string s2 = "";
   int c = 0;
    getline (cin, s1);
    while (c < s1.length()) {
    s2 = s1[c] + s2;
    c++;
    }
    cout << s2 << endl;
  }