/*Develop a C++ program that takes a sentence and counts the number of vowels,
 consonants, and digits in it.
  The letters in the sentence can be in lowercase or uppercase.
   Use `for` loop to solve the problem. */
   #include<iostream>
   using namespace std;
   int main () {
    cout << "Enter a string\n";
    string sentence;
    getline (cin, sentence);
    int vowel = 0;
    int consonant = 0;
    int digit = 0;
    for (int counter = 0; counter < sentence.length(); counter++) {
        char ch = tolower(sentence[counter]);
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': vowel++; break;
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0': digit++; break;
            default: consonant++; break;
        }
    }
   }
