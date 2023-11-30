/*Write a C++ program that receives a word and a text.
 The program should check if the word appears in the given text.
  If the word is found in the text, print "Word found." If not, print "Word not found."*/
  #include<iostream>
  using namespace std;
  int main () {
    cout << "Enter a sentence\n";
    string sent;
    getline (cin, sent);
    cout << "Enter a search word \n";
    string word;
    cin >> word;
    int wlength = word.length();
    bool found = true;
    for (int counter = 0; counter < sent.length() - word.length(); counter++) { // only need to go to the sentence length minus word length because it will be out of bounds of the input otherwise if it checks the rest.
       for (int c2 = 0; c2 < word.length(); c2++) {
        found = true;
        if (sent[counter + c2] != word[c2]) {
          found = false;
          break;
        }
       }if (found) {
      cout << "found at position " << counter << endl;
      }  
    }  
  }