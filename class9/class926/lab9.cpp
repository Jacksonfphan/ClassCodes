/*Develop a C++ program that uses a `while` loop to repeatedly
 ask the user for a number and adds it to a running total.
  The loop should continue until the user enters 0. 
  After exiting the loop, display the total.*/
  #include<iostream>
  using namespace std;
  int main (){
    int x;
    int total = 0;
    int c = 1;
    cout << "Enter a number.\n";
    cin >> x;
    while (x > 0){
        total += x;
        cout << "Enter a number. \n";
        cin >> x;
    }
    cout << total << '\n';
  }