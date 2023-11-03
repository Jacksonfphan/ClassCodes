/*First Rank: Create a program that receives a sentence from the user including a set of
 first names separated by space and prints out the name that would show up first in 
 alphabetical order. You can assume no two names in the list share the same first
  character. Example: if the input is "John Lauren Samuel Nicholas Eva", the output 
  should be "Eva". */
  #include<iostream>
  using namespace std;
  int main () {
    cout << "Enter names. \n";
    string names, nextname, firstrankname = "";
    getline(cin, names);
    int c = 0;
    while (c < names.length()) {
        if (names [c]== ' ') {
            if (nextname[0] < firstrankname[0] or firstrankname == "") {
                 firstrankname = nextname;                                 
            }  
            nextname = ""; 
            }else {
            nextname += names[c];
        }
         c++;    
        }            
    if (nextname[0] < firstrankname[0] or firstrankname == "") {
                firstrankname = nextname;
  }
  cout << firstrankname << endl;
  }