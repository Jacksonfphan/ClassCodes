/* Create a program that prompts the user to enter the day of
 the week (1 for Monday, 2 for Tuesday, etc.) and then displays
  whether it's a weekday or a weekend day.*/;
  #include <iostream>
  using namespace std;
  int main(){
cout<<"Please enter a number for the Day\n";
int x;
cin>>x;
switch (x){
    case 1:
         cout<< "Monday\n";
         break;
    case 2:
        cout<< "Tuesday\n";
        break;
    case 3: 
        cout<< "Wednesday\n";
        break;
    case 4: 
        cout<< "Thursday\n";
        break;
    case 5: 
        cout<< "Friday\n";
        break;
    case 6: 
        cout<< "Saturday\n";
        break;
    case 7: 
        cout<< "Sunday\n";
        break;
    default: cout<<x<< " day doesn't exist!";
    }

  }

