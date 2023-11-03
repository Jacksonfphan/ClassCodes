/*Create a C++ program that uses a `for` loop to simulate a guessing game. Generate a random number between 1 and 100, and have the user guess the number.
 Provide hints if the guess is too high or too low until they guess correctly.*/
 #include<iostream>
 using namespace std;
 int main () {
    srand(time(NULL));
    int x = rand() % 100 + 1;
    int guess;
    cout << x << endl;
    for (int c = 0; c < 5; c++) {
        cout << "Enter your guess \n";
        cin >> guess;
        if (guess > x) {
            cout << "TOO HIGH\n";
        }
        else if (guess < x) {
            cout << "TOO LOW\n";
        }
        else  { 
            cout << "YOU GUESSED IT\n";
            break;
        }
    }
    if (guess != x) {
        cout << "You are out of chances\n";
    }
 }