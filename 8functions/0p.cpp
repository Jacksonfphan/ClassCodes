/*Write a C++ program that defines a function called calculateSum which takes two 
double parameters and returns their sum. In the main() function, call this calculateSum
function three times with different sets of arguments and display the result each time.

first we declare the function, meaning we say what is the name, inputs, and outputs */
#include<iostream>
#include<vector>
using namespace std;
//output type   name            parameters
    double      calculatesum(double x, double y) { 
// this line is the function declaration, from this we have the function definition--
// body of the function, this function will calculate 2 the sume of 2 numbers are return it
// as the result.
    double z = x + y;
    return z;        
}
int main () {
    double p = calculatesum (9, 25);
    cout << p << endl;
}