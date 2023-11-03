/*Character Exploration: Create a program that takes a text
 input from the user and prints out the first, second,
  and last characters of the input.*/
  #include<iostream>
  using namespace std;
  int main () {
    string s1;
    getline(cin, s1);
    int x;
    x = s1.length();
    cout << s1[0] << " " << s1[1] << " " << s1[x-1] << endl;
    //alt logic
    //cout << s1[0] << " " << s1[1] << " " << s1[s1.length()-1] << endl;
  }