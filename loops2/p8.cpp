/*Hollow Rectangle: Write a program to print a hollow rectangle pattern of asterisks with 'm' rows and 'n' columns. The user inputs 'm' and 'n',
 and the program generates the pattern with a hollow interior.*/
 #include<iostream>
 using namespace std;
 int main () {
    cout << "Enter the # of columns\n";
    int col;
    cin >> col;
    cout << "Enter # of rows\n";
    int row;
    cin >> row;
    int count = 1;
    int c2=1;   
    while (count <= row) {
        while (c2 <= col) {
            if (count == 1 || row == count || c2 == 1 || col == c2) {
                cout << "*";
            } else {
                cout << " ";
            }
             c2++;
        }   c2 = 1;    
            count++; 
            cout << endl;    
    }
    }
