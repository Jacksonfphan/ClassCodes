/*Write a C++ program that defines a function calculateSum to find the sum and another 
function calculateAverage to find the average of elements in an array of integers. 
In the main() function, ask the user to input the size of the array and its elements, 
then display the sum and average using these functions.*/
#include<iostream>
#include<vector>
using namespace std;
double calculateSum(double & x, double & y) {
    return x + y;
}
int main () {
    cout << "Enter 2 numbers for sum calculation\n";
    double x, y;
    cin >> x >> y;
    cout << calculateSum(x, y) << endl;
}
