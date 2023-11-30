/*Create a C++ program that defines a function called calculateInterest which calculates
 simple interest. This function should take three parameters: principal (double), 
 rate (double), and time (int). However, set default values for rate and time 
 (e.g., rate = 5% and time = 1 year). In the main() function, ask the user for the 
 principal amount and optionally the rate and time. Use the calculateInterest function 
 to compute and display the simple interest.*/
 #include<iostream>
 using namespace std;
 double calculateInterest(double principal, double rate = .05, int time = 1) {
    double interest = principal * rate * time;
    return interest;
 }
 int main () {
    cout << "Enter a principal, rate, and time in years for interest calculation\n";
    double p, r;
    int t;
    cin >> p >> r >> t;
    double i = calculateInterest(p, r, t); // this uses the input values that were cin'ed
    cout << i << endl;
    double i = calculateInterest(p); // this uses the default values that are set in the function
    cout << i << endl;
 }