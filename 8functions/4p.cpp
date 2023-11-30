/*Write a C++ program that defines a function called printNumbers which takes an
 integer parameter n and prints all the numbers from 1 to n. In the main() function, 
 ask the user for a number and call the printNumbers function to display the sequence.*/
 #include<iostream>
 using namespace std;
 void printNumbers(int num) { // void is the return type because nothing is being returned
        for (int i = 1; i <= num; i++) {
        cout << i << endl;
    }
 }
 int main () {
    cout << "Enter a number\n";
    int x;
    cin >> x;
    printNumbers(x);
 }