/*Develop a C++ program that uses a `for ` loop to generate and print the first 20 terms of the geometric progression
 with a common ratio of 2, starting with the term 1.*/
 #include<iostream>
 using namespace std;
 double geo = 1;
 int main () {
    for (int c = 1; c <= 20; c++) {
        cout << geo << " " << endl;
        geo = geo * 2;
    }
 }