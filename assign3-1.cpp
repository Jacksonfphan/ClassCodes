#include <iostream>
using namespace std;

int main() {
    cout<< "Enter Your age \n";
    int x;
    cin>>x;
    if (x >= 0 and x<= 12){
        cout<<"Child\n";
    }
    else if (x > 12 and x < 20){
        cout<< "Teen\n";
    }
    else if (x>19 and x<65) {
        cout<< "Adult\n";
    }
    else{
        cout<< "Senior\n";
    }
}