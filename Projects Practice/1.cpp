/*Selection Sort: Create a C++ program that sorts an array of integers using selection sort.
 Here is animation that shows how selection sort works */
#include<iostream>
using namespace std;
void swap(int arr[], int i, int min, int minlocation) {
    int temp = arr[i];
    arr[i] = min;
    arr[minlocation] = temp;
}

void selectandSwap(int arr[], int i, int size) {
    
    int minlocation = i;
    int min = arr[i];
    for (int j = i + 1; j < size; j++) {
        if (arr[j] < min) {
            min = arr[j];
            minlocation = j;
        }
    }
    swap(arr, i, min, minlocation);
}






void printArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main () {
    int size = 20;
    int array[20] {3, 30, 45, 34, 2, 345, 89, 90, 47, 43, 2, 4, 8, 9, 90, 100, 67, 87, 238, 9123};
    
    printArray(array, size);
    cout << endl;

    for (int i = 0; i < size; i++) {
        selectandSwap(array, i, size);
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " " ;
    }
    cout << endl;
}
