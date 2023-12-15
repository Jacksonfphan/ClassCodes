/*Find Unique Elements from File: Create a C++ program that defines a function `findUniqueElements` to find and display the unique elements
 in an array of integers. Read the size of the array and its elements from a text file named "input_unique.txt". Display the unique elements using 
 the `findUniqueElements` function.*/
 #include<iostream>
 #include<fstream>
 using namespace std;

 void findUniqueElements(int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        bool unique = true;
        
        for (int j = 0; j < size; j++) {
            if (i == j) {
                continue;
            }
            else if (arr[i] == arr[j]) {
                unique = false;
                break;
            }
        }
        if (unique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
 }

 void findnum(int size) {
    ofstream f("input_unique.txt");
    for (int i = 0; i < size; i++) {
        int x = rand() % 100 + 1;
        f << x << " ";
    }
    f.close();
 }

 void fillArray(int arr[], int size) {
    ifstream f("input_unique.txt");
    for (int i = 0; i < size; i++) {
        f >> arr[i];
    }
    f.close();
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 }

 int main () {
    int size = 20;
    int arr[size];

    // findnum(size);

    fillArray(arr, size);

    findUniqueElements(arr, size);
 }
