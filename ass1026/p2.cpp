/* Floyd's Triangle: Develop a program to generate and print Floyd's Triangle for 'n' rows. Floyd's Triangle is a right-angled 
triangular array of natural numbers. For 'n = 4', the pattern looks like this:
1
2 3
4 5 6
7 8 9 10 */
#include<iostream>
using namespace std;
int main () {
cout << "Enter a number: \n";
    int n;
    cin >> n;
    int c = 1;
    int c2 = 1;
    int c3 = 1;
    while (c <= n) {
        while (c2 <= c) {
            cout <<  c3 << " ";
            c2++;
            c3++;
        }
        c2 = 1;
        c++;
        cout << endl;
    }
}