/*Write a program that uses a `while` loop to calculate
 and print the sum of all odd numbers from 1 to 50.*/
 #include<iostream>
 using namespace std;
 int main (){
    int c = 1;
    while (c <= 50){
        cout << c << " ";
        c = c + 2;        
    }
   cout << "\n";
 }