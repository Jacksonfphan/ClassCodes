/*Create a C++ program that defines a function called swapValues which swaps the values of
 two integer variables using reference parameters. In the main() function, ask the user for
 two integers, swap their values using the swapValues function, and display the swapped
 values.*/
 #include<iostream>
 using namespace std;
 void swapValues(int & x, int & y) { // the ampersands here signify that we want to use the same memory cells that are collected from the user
    int temp = x;                    // instead of allocating new cells for x and y;
    x = y;
    y = temp;
 }
 int main () {
    cout << "Please enter 2 integers to be swapped\n";
    int a,b;
    cin >> a >> b;
    swapValues(a,b);
    cout << a << " " << b << endl;
 }