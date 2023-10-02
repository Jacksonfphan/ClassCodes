#include<iostream>
using namespace std;

int main(){
    cout<< "Enter a number\n";
    int x;
    cin>>x;
    int i=1;
    while (i <= 10){
        cout << x * i << "\n";
        i++;
    }
}