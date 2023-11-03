/*First Rank: Create a program that receives a sentence from the user including 
a set of first names separated by space and prints out the name that would show 
up first in alphabetical order. You cannot assume no two names in the list share 
the same first character. Example: if the input is "John Lauren Ashton Nicholas Ava",
 the output should be "Ashton". */
 #include<iostream>
 using namespace std;
int main () {
    cout << "Enter names. \n";
    string names, nextname, firstrankname = "";
    getline(cin, names);
    int c = 0;
    int n = 0;
    while (c < names.length()) {
        if (names [c]== ' ') {
            if (nextname[n] < firstrankname[n] or firstrankname == "") {
                 firstrankname = nextname;                                 
            } else if (nextname[n] == firstrankname[n]) {
                 while (n < nextname.length() and n < firstrankname.length()) {
                 if (nextname[n] < firstrankname[n]) {
                 firstrankname = nextname;                 
                 }                               
                 n++;}            
            }
            n=0; 
            nextname = ""; 
        }else {
            nextname += names[c];
            }
         c++;    
        }            
    if (nextname[0] < firstrankname[0] or firstrankname == "") {
                firstrankname = nextname;
  }else if (nextname[n] == firstrankname[n]) {
     while (n < nextname.length() and n < firstrankname.length()) {
         if (nextname[n] < firstrankname[n]) {
             firstrankname = nextname;                  
             }                               
     n++;
     } 
   }
  cout << firstrankname << endl;
  }