/*Write a program to receive integers (stop when 0 is entered) and out them in a vector and prints out 2 summation 
equations for numbers in odd and even positions of the vector*/
#include<iostream>
 #include<vector>
 using namespace std;
 int main () {
    vector<double> sum;
    double x;
    double totale = 0, totalo = 0;

    while (x != 0) {
        cin >> x;
        sum.push_back(x);
    }
    sum.pop_back(); // removes the last number in the vector, in this case 0
    for (int i = 0; i < sum.size(); i+=2) {
        cout << sum[i] << ", ";
        totale += sum[i];
    }
    for (int i = 1; i < sum.size(); i+=2) {
        cout << sum[i] << ", ";
        totalo += sum[i];
    }      
    cout << totale <<", "<< totalo << endl;
 }