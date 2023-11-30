/*Write a program to receive double numbers from a user and add them to a vector until
 0 is entered by the user, then print out all the numbers in a single line.*/
 #include<iostream>
 #include<vector>
 using namespace std;
 int main () {
    vector<double> sum;
    double x;
    double total = 0;
    while (x != 0) {
        cin >> x;
        sum.push_back(x);
    }
    sum.pop_back(); // removes the last number in the vector, in this case 0
    for (int i = 0; i < sum.size(); i++) {
        cout << sum[i] << ", ";
        total += sum[i];
    }   
    cout << total << endl;
 }
