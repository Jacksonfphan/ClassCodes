/*Write a program that reads integers into two separate vectors until 0 is entered for each, then finds and prints the common elements
 (intersection) between these vectors.*/
 #include<iostream>
 #include<vector>
 using namespace std;
 int main () {
    vector<int>vec1;
    vector<int>vec2;
    vector<int>common;
    int input;
    int input2;
    cout << "Enter 2 lists of numbers\n";
    do {
        cin >> input;
        vec1.push_back(input);
    }while (input != 0);
    
    vec1.pop_back();
    
    cout << "next\n";

    do {
        cin >> input2;
        vec2.push_back(input2);
    }while (input2 != 0);
    
    vec2.pop_back();

    if (vec1.size() > vec2.size()) {
        for (int i = 0; i < vec1.size(); i++) {
            for (int j = 0; j < vec1.size();j++) {
                if (vec1[i] == vec2[j]) {
                    common.push_back(vec1[i]);
            }
        }
    }
    }else {
        for (int i = 0; i < vec2.size(); i++) {
            for (int j = 0; j < vec2.size();j++) {
                if (vec2[i] == vec1[j]) {
                    common.push_back(vec2[i]);
                }
            }
        }    
    }for (int output: common){
        cout << output << " ";
    }
    cout << endl;
 }