/*Write a C++ program that defines a function calculateSum to find the sum and another function calculateAverage to find the average of 
elements in an array of integers. In the main() function, ask the user to input the size of the array and its elements, then display 
the sum and average using these functions.*/
#include<iostream>
using namespace std;
double calSum(double a[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}
double calAvg(double a[], int size) {
    double avg = calSum(a, size);
    avg = avg / size;
    return avg;
}
int main () {
    cout << "Enter the amount of numbers for sum and average calculation\n";
    int size;
    cin >> size;
    double arr[size];
    cout << "Enter numbers\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int sum = calSum(arr, size);
    cout << sum << endl;
    double avg = calAvg(arr, size);
    cout << avg << endl;
}