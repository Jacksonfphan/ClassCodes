/*Write a C++ program that defines a function called calculateArea which takes two parameters: length and width (both doubles) 
and returns the area of a rectangle. In the main() function, ask the user for the length and width of rectangles and display 
their respective areas using the calculateArea function.*/
#include<iostream>
#include<vector>
using namespace std;

double calArea(double x, double y) {
    double area = x * y;
    return area;
}
int main () {
    cout << "Enter length and width to calculate area\n";
    double a, b;
    cin >> a >> b;
    cout << "The area is: " << calArea(a, b) << endl;
}