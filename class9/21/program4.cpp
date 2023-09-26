#include<iostream>
using namespace std;

int main (){
    cout << "Enter a number\n";
    int x;
    cin>>x;
    int i = 2;
    while (i <= x){
        cout << i << "\n";
        i = i + 2;
    }
}