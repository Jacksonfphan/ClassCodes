#include<iostream>
using namespace std;
int main (){
    int sum=0;
    int i = 1;
    while (i<=100){
        if (i%3 == 0 and i%5 == 0) {
        sum = sum + i;
        }
        i++;
    }
    cout<< sum << "\n";
}