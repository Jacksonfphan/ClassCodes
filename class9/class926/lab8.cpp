/*Create a C++ program that uses a `while` loop to repeatedly 
ask the user for a positive integer until they enter a negative
 number. Keep track of how many positive integers were entered 
 and display that count at the end.*/
 #include<iostream>
 using namespace std;
 int main (){
    int x;
    int c = 0;
    cout << "Enter a number.\n";
    cin >> x;
    while (x > 0){
        cout << "Enter a number.\n";
        cin>>x;
        c++;
    }
    cout << c << " positive numbers entered.\n";
 }