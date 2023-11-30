/*Write a C++ program that receives the number of students and, for each student,
 receives the number of courses and their respective grades (ranging from 0 to 20).
 The program should calculate and print the average grade for each student.*/
 #include<iostream>
 using namespace std;
 int main () {
    cout << "Enter the number of students\n";
    int students;
    cin >> students;
    int total = 0, average = 0;
    for (int c = 1; c <= students; c++) {
        cout << "enter the number of courses for student " << c << endl;
        int courses;
        cin >> courses;
        for (int c2 = 1; c2 <= courses; c2++) {
            cout << "Enter grades for class" << c2 << " in a percent format\n";
            int grades;
            cin >> grades;
            total += grades;
        }
        average = total/courses;
        cout << "student " << c << " average is " << average << endl;
        total = 0;
        average = 0;
    }
 }