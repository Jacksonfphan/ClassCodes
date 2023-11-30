/*Develop a program that reads integers into a vector until 0 is entered, then counts the frequency of each element and
 prints the elements along with their frequencies.*/
  #include<iostream>
 #include<vector>
 using namespace std;
 int main () {
    vector<double> input;
    int x;
    do {
        cin >> x;
        input.push_back(x);
    } while (x != 0);
    input.pop_back();
    for (int i = 0; i < input.size();i++) {
        int counter = 0;
        for (int j = 0; j < input.size(); j++) {
            if (input[i] == input[j])
            counter++;                                                                                                                                                                                                                                                                                                                                                                                        
        }
        cout << input[i] << " appears " << counter << " times\n";
    }
}                                                                                                                                                                                                                                                                                                                                                           
                                                                                  