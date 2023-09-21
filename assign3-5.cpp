/*Develop a program that simulates a simple ATM. Ask the user to
 select an option (withdraw, deposit, check balance) and use a
  switch statement to perform (by printing a message on the 
  screen) the corresponding operation.
*/;
#include<iostream>
using namespace std;
int main(){
    cout<< "Please enter 1 for withdraw, 2 for deposit, and 3 for check balance.\n";
    int x;
    cin>>x;
    switch (x){
        case 1: cout<<"How much do you want to withdraw?\n";
        int y;
        cin>>y;
        cout<< "Please take your $"<<y<< " dollars from the machine\n";
        break;
        case 2: cout<<"How much do you wish to deposit?\n";
        int z;
        cin>>z;
        cout<< "$"<<z<< " deposited into your account.\n";
        break;
        case 3: cout<< "Your balance is $4.38.\n";
        break;
        default: cout<< "Input not recognized\n";
    }
}