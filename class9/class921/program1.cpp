#include<iostream>
using namespace std;
// factorial question
int main () {
cout << "enter a number\n";
int num;
cin>>num;
int res = 1;
int i = 1;
while ( i <= num ){
    res = res*i;
    i++;
}
cout<<res<< "\n";

}
