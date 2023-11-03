/*String Concatenation: Develop a program that takes two
 strings as input from the user, concatenates them,
  and displays the resulting concatenated string.*/
  #include<iostream>
  using namespace std;
  int main () {
    string a;
    string b;
    string c;

    cout << "Please enter the first word!\n";
    cin >> a;

    cout << "Please enter the second word!\n";
    cin >> b;

    c = a + b;
    
    cout << c << endl;
  }