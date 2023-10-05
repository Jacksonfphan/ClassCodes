/*Write a program that uses a `while` loop to calculate
 and print the sum of all odd numbers from 1 to 50.*/
 #include<iostream>
 using namespace std;
 int main (){
    int c = 1;
    int total = 0;
    while (c <= 50){
        total += c;
        c = c + 2;
    }
   cout << total << "\n";
 }