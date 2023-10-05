/*Write a program that asks the user for a number
 and uses a `while` loop to print all the even
  numbers between 1 and that number.*/
  #include<iostream>
 using namespace std;
 int main (){
    int c = 2;
    int x;
    cout << "Enter a number.\n";
    cin >> x;
    while (c < x){
        cout << c << " ";
        c+=2;        
    }
   cout << "\n";
 }