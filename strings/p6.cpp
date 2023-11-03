/*Character Replacement: Write a program that receives a
 text input from the user, replaces its first character with "S",
  and then prints out the modified text.*/
  #include<iostream>
  using namespace std;

  int main () {
    string s1;
    getline(cin, s1);
    s1[0] = 'S';
    cout << s1 << endl;
  }