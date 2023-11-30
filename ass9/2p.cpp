/*Create a program that reads 6 integers into two separate vectors. Perform element-wise addition of these two vectors and 
store the result in a third vector. Finally, print the resulting vector.*/
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> num1;
    vector<int> num2;
    vector<int> sumnum;
    int x;
    cout << "Enter 6 numbers into 2 lists to be added together " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> x;
        num1.push_back(x);
    }
    for (int i = 0; i < 3; i++) {
        cin >> x;
        num2.push_back(x);
    }
    for (int i = 0; i < num1.size(); i++) {
        sumnum.push_back(num1[i] + num2[i]);
    }
    cout << " The resulting list is: " << endl;
    for (int num : sumnum) {
        cout << num << " ";
    }
    cout << endl;
}