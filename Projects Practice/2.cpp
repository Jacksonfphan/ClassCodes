/*Maximum and Minimum Elements in Array from File: Create a C++ program that defines functions `findMax` and `findMin` to determine the maximum and minimum elements in an array of integers, 
respectively. In the main read the elements of the array (20 numbers) from a text file named "input_max_min.txt". After reading the array, display the maximum and minimum elements using these functions.*/
#include<iostream>
#include<fstream>
using namespace std;

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
    }
    cout << "The minimum is " << min << endl;
    return min;
}
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
    }
    cout << "The maximum is " << max << endl;
    return max;
}

void findNumbers() {
    ofstream fnumbers("input_max_min.txt");
    for (int i = 0; i < 20; i++) {
        int num = rand() % 100 + 1;
        fnumbers << num << " ";
    }
    fnumbers.close();
}

void fillArray(int arr[],int size) {
    ifstream fnum("input_max_min.txt");
    for (int i = 0; i < size; i++) {
        fnum >> arr[i];
        cout << arr[i] << " ";
    }
    fnum.close();
    cout << endl;
} 

int main () {
    int size = 20;
    int arr[20];
    
    //findNumbers();
    
    fillArray(arr, size);
    
    findMin(arr, size);

    findMax(arr, size);
}