#include<iostream>
using namespace std;
/*Write a C++ program that uses a `while` loop to print even
 numbers from 2 to 20 (inclusive).*/
int main (){
    int x = 2;
    while (x <= 20){
        cout<< x << "\n";
        x += 2;
    }
}