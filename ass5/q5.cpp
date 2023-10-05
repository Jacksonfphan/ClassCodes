/*Develop a C++ program that receives a number and uses a
 `while` loop to find out if it is a prime number.*/
 #include<iostream>
 using namespace std;
 int main (){
    int x;
    int c = 2;   
    bool prime = true;
    cout << "Enter a number to check for prime. \n";
    cin >> x;
    while (c < x){
     if (x % c ==0){
        prime = false;
     } c++;
    }
    cout << prime << "\n";
     }
      
        

    
    
    
 