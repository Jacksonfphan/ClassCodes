/*Write a program to receive integers (stop when 0 is entered) from the input,
 put them in a vector and then prints out the second largest number of the vector. 
Example input: 12, 2, 5, 9, 13, 3, 23, 9, 0
Output: 13*/
#include<iostream>
#include<vector>
using namespace std;
int main () {
vector<int> input;
int x = 0;
int second = 0;
while (x != 0) {
    cin >> x;
    input.push_back(x);
}
int highest;
for (int i = 0; i < input.size(); i++) {
    if (input[i] > x) {
        x = input[i];
        if (second)
    }
}
}