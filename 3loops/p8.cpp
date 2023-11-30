/*Develop a C++ program that asks the user for an integer and then uses a `for` loop
 to check if it's a palindrome (reads the same forwards and backwards).*/
 #include<iostream>
 using namespace std;
 int main () {
    cout << "Enter a number for palindrome check\n";
    int x;
    cin >> x;
    int orig = x;
    int z = 0, y;
    while (x!=0) {
      y = x % 10;
      x = x/10;
      z += y; 
    }
    cout << z << endl;
 }