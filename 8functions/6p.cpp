/*Write a C++ program that defines two functions: celsiusToFahrenheit and fahrenheitToCelsius. 
celsiusToFahrenheit should convert Celsius to Fahrenheit and fahrenheitToCelsius 
should convert Fahrenheit to Celsius. In the main() function, ask the user for a 
temperature value and its unit (Celsius or Fahrenheit) and convert it using the respective 
function.*/
#include<iostream>
using namespace std;
double CtoF(double c) {
 double f = (c * 1.8 + 32);
 return f;
}
double FtoC(double f) {
 double c = (f-32) / 1.8;
 return c;
}
int main () {
    cout << "Would you like to convert from fahrenheit to celsius, enter f to convert to f, and c to convert to c\n";
    string input;
    cin >> input;
    if (input == "f") {
        cout << "enter temperature\n";
        double c;
        cin >> c;
        cout << CtoF(c) << endl;
    }else if ( input == "c") {
        cout << "enter temperature\n";
        double f;
        cin >> f;
        cout << FtoC(f) << endl;
    }
}