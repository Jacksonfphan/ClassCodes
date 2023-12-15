/*Reverse Array Elements from File: Develop a C++ program with a function `reverseArray` that reverses the elements of an integer array of size 10. Read array elements from a text file named "input_reverse.txt". Use the `reverseArray` function to reverse the array elements and display the reversed array.*/
#include<iostream>
#include<fstream>
using namespace std;

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findNumbers( int size) {
    ofstream fnum("input_reverse.txt");
    for (int i = 0; i < size; i++) {
        int num = rand() % 100 + 1;
        fnum << num << " ";
    }
    fnum.close();
}

void fillArray (int arr[], int size) {
    ifstream fnum("input_reverse.txt");
    for (int i = 0; i < size; i++) {
        fnum >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    fnum.close();
}
int main () {
    int arr[10];
    int size = 10;
    //findNumbers(size);

    fillArray(arr, size);

    reverseArray(arr, size);
}