//Create a program that takes a string and checks if it is a valid phone number
//(follows a specific format) +1(123)456-7890 format.
#include<iostream>
using namespace std;
int main () {
    cout << "Enter a valid phone number\n";
    string phone;
    getline (cin, phone);
    bool valid = true;
    for (int c = 0; c < phone.length(); c++) {
        switch (c) {
            case 0: if (phone[c] != '+') {
                valid = false;                
            } break;
            case 1: if (phone[c] != '1') {
                valid = false;                
            } break;
            case 2: if (phone[c] != '(') {
                valid = false;
            } break;
            case 6: if (phone[c] != ')') {
                valid = false;
            } break;
            case 10: if (phone[c] != '-') {
                valid = false;
            } break;
            default: if (phone[c] > 57 or phone[c] < 48) {
                valid = false;
            }
        }



        // alt logic
        // if (phone[0] == '+' and phone[1] == '1' and phone[2] == '(' 
        // and phone[6] == ')' and phone[10] == '-' and phone.length() == 15) {
        //     valid = true;
        //     if (phone[3,4,5,7,8,9,10,12,13,14,15] != 1 or 2 or 3 or 4 or 5 or 6 or 7 or 8 or 9) {
        //         valid = false;
        //     }

        // } else {
        //     valid = false;
        // }
    }if (valid) {
        cout << "Phone number is valid\n";
        }
        else {
            cout << "Phone number is invalid\n";
        }
}
