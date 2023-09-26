#include<iostream>
using namespace std;
int main () {
    cout<< "Enter a number \n";
    int x;
    cin>>x;
    int i = 1;
    int f = 1;
    while (i <= x) {
        f = f * i;
        i++;   
    }
    cout<< f << "\n";
}