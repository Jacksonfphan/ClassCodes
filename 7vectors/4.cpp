/*write a program to recieve and even number of integers, put them in a vector,
 then modify the vector to make sure that every pair of numbers is sorted.
 Make sure every pair of numbers is sorted in ascending order. Stop when 0 is entered*/
 #include<iostream>
 #include<vector>
 using namespace std;
 int main () {
    vector<double> pair;
    cout << "Enter an even amount of numbers\n";
    double x;
    double y;
    while (x != 0) {
        cin >> x;
        pair.push_back(x);
    }
    pair.pop_back();
    for (int i = 0; i < pair.size(); i +=2) {
        if (pair[i] > pair[i + 1]) {
            y = pair[i + 1];
            pair[i + 1] = pair[i];
            pair[i] = y;
        }
    }
    for (int j = 0; j < pair.size();j++) {
    cout << pair[j] << ", ";
    }
 }