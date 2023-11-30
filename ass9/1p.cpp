/*Input 9 integers into a vector and remove any duplicates, leaving only unique elements in the vector. Print the modified vector. */
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int>input;
    cout << "Enter 9 numbers for a duplicate check\n";
    int x;
    for (int i = 0; i < 9; i++) {
        cin >> x;
        input.push_back(x);
    } 
    for (int j = 0; j < input.size(); j++) {       
        for (int i = j + 1; i < input.size();) {
            if (input[j] == input[i]) {
                input.erase(input.begin() + i);
            } else {
                i++;
            }
        }
    }
    for (int output: input){
        cout << output << " ";
    }
    cout << endl;
}