/*Write a C++ program that receives number items in an invoice
 from user (n) and then receives price of those n items from 
 user and prints total of prices of all items. */
 #include<iostream>
 using namespace std;

 int main () {
    cout << "Please enter the number of x items.\n";
    int x;
    cin >> x;
    int c = 1;
    int price;
    int total = 0;
    while (c <= x){
        cout << "enter the price of item #" << c << "?\n";
        cin >> price;
        total += price;
        c++;   
    }
    cout << total << "\n";
    }
    
 