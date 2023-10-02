#include<iostream>
using namespace std;
int main () {
int i = 2;
int sum=0;
while (i <= 50){
    sum = sum + i;
    cout<<sum<< "\n";
    i = i+2;
}
cout<<sum << "\n";
}