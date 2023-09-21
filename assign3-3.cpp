/*Develop a program that takes a user's birthdate and the 
current date as input and calculates their age in years, months,
 and days (assume there is no leap years and all months has 30 
 days)*/;
 #include <iostream>
 using namespace std;
 int main() {
    cout<< "Enter your birth year, \n";
    int y;
    cin>>y;
    cout<< "month, \n";
    int m;
    cin>>m;
    cout<< "and day. \n";
    int d;
    cin>>d;
    
    int ty= 2023;
    int tm= 9;
    int td= 20;

if ( m<tm && d<td){
    cout<< "Your age is " <<ty-y<< " years, " << tm-m<< " months, and" << td-d<< " days\n";  
 }
  else if (m>tm && d<=td){
    cout<<2022-y<< " years, " << (12+tm)-m<< " months, and " <<td-d<< " days.\n";
  }  
  else if (m<=tm && d>td){
    cout<< ty-y<< "years, " << tm-m<< " months, and "<< (30+d) << " days.\n";
  }
  else (m>tm && d>td);{
    cout<< ty-1-y<< " years, "<< (12+tm)-m<< " months , and "<<(30+td)-d << " days.\n";

  }
  
   }
 