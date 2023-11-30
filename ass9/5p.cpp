/*Write a program that reads integers into a vector until 0 is entered, then calculates and prints the average and variance
 of the elements in the vector.*/
 #include<iostream>
 #include<vector>
 #include<cmath>
 using namespace std;
 int main () {
    vector<double> input;
    int x;
    do {
        cin >> x;
        input.push_back(x);
    } while (x != 0);
    input.pop_back();
    double avg = 0;
    for (int i = 0; i < input.size(); i++) {
        avg += input[i];
    }
    avg = (avg / input.size());
    double variance = 0;
    for (int i = 0; i < input.size(); i++) {
        variance += (input[i]-avg) * (input[i]-avg);
    }
    variance /= input.size();
    cout << "the average is " << avg << endl;
    cout << "the variance is " << variance << endl;
 }