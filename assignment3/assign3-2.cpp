#include<iostream>
using namespace std;
/*Create a program that prints out the electricity charge for
 a household based on the number of units consumed 
 (units are received from the input). 
 The rate is $0.12 per unit for
 the first 100 units and $0.15 per unit for additional units.*/
int main(){
cout << "Enter number of units consumed\n";
double x;
cin>>x;
if (x<101){
    cout<< x*0.12<<" dollars this month\n";
}
else if(x>100){
    cout<<(12)+((x-100)*0.15)<< " dollars this month\n";
}
else { cout<< "Invalid units.\n";
}

}