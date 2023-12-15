/*Search Element in Array from File: Write a C++ program that defines a function `searchElement` to check if a given integer exists in an array. 
Read 20 elements of the array from a text file named "input_search.txt" and utilize the `searchElement` function to determine whether a number exists 
in the array or not, and display the result. Read the number to search from the input and repeat the process of searching elements until the user enters -1.
*/
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

void searchElement(int arr[], int size, int input) {
    bool found = false;
    int x;
    for (int i = 0; i < size; i++) {
        if (arr[i] == input) {
            found = true;
            x = i;
            break;
        }
    }
    if (found) {
        cout << arr[x] << " was found at " << x << endl;
    }
    else {
        cout << "Not found in this array \n";
    }
}

void fillArray(int arr[], int size) {
    ifstream f("input_search.txt");
    for (int i = 0; i < size; i++) {
        f >> arr[i];
    }
    f.close();
}

int main () {
    int size = 20;
    int arr[size];
    
    fillArray(arr, size);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    while (true) {
        int input;
        cin >> input;
        searchElement(arr, size, input);
        if (input == -1) {
            break;
        }
    }
}