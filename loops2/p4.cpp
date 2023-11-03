#include<iostream>
using namespace std;
int main () {
    int c = 1;
    int t = 1;
    while (c <= 10) {
        while (t <= 10) {
        cout << c << "x" << t << "=" <<c * t << " ";
        t++;
    }
    t=1;
    cout << endl;
    c++;
}
}