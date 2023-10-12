/*Write a C++ program that receives a text input containing multiple words and prints the last word of the text.
 For example, if the input is "This is the last word," the program should output "word."*/
 #include<iostream>
 using namespace std;
 int main (){
    string s,l = "";
    cout << "Enter a line of text\n";
    getline(cin, s);
    s.find_last_of(' ');
    int c = 0;
    c = s.find_last_of(' ') + 1;
    while (c < s.length()){        
        l = l + s[c];
        c++;
    } cout << l << endl;
 }