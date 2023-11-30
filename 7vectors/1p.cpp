//Write a program to read height of a few students and store them in a vector and print
//all the heights
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<double> height(5);
    for (int i = 0; i < 5; i++) {
        cin >> height[i];
    }
    for (int j = 0; j < 5; j++) {
        cout << height[j] << ", ";
    }
cout << endl;
}
