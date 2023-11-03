/*Reverse String: Write a program that reverses the order of the words
 in given text string that has words separated by space characters.
  For example, if the input is "hello world of c++" the program should output "c++ of world hello".
*/
#include<iostream>
using namespace std;
int main () {
    string input, res, nextw = "";
    int c = 0;
    cout << "Enter a text to reverse\n";
    getline(cin, input);
    while (c < input.length()) {
        nextw = nextw + input[c];        
        if (input[c] == ' ') {
            res = nextw + res;
            nextw = "";                       
            }
     c++;       
    }res = nextw + " " + res;
    cout << res << endl;
}