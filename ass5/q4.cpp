/*Write a program that prompts the user for a positive
 integer and uses a `while` loop to print a 
 pattern of asterisks (`*`) on the screen.*/
 #include<iostream>
 using namespace std;
 int main (){
   cout << "Enter a positive integer.\n";
   int x;
   cin >> x;
   int c = 1;
   int c2 = 1;
   while (c <= x){
    while (c2 <= c){
      cout << "* ";      
      c2++;
    } 
    c2=1;
    c++;
    cout << endl;     
   } 
 }