/*Create a program that asks the user for a positive 
integer `n` and uses a `while` loop to calculate and
 print the product of all numbers from 1 to `n`.*/
 #include<iostream>
 using namespace std;
 int main (){
    int x;
    int c = 1;
    double total = 1;
    cout << "Enter a number. \n";
    cin >> x;
    while (c <= x){
        total = c * total;       
        c++;               
    }
    cout << total << "\n";
 }