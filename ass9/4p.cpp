/*Create a program that reads integers into a vector until 0 is entered, then rotates the elements of the vector by a given number of
 positions (input from the user) to the left and prints the rotated vector.*/
 #include<iostream>
 #include<vector>
 using namespace std;
 int main () {
    vector<int>vectin;
    cout << "Enter numbers to be rotated\n";
    int x;
    do {
        cin >> x;
        vectin.push_back(x);
    }while (x != 0);
    vectin.pop_back();
    cout << "How much would you like it to be rotated to the left?\n";
    int rotate;
    cin >> rotate;
    for (int i = 0; i < rotate; i++) {
        int temp = vectin[0];
        vectin.erase(vectin.begin());
        vectin.push_back(temp);

        // alt logic? int temp = vectin[0];
        // for (int j = 0; j < vectin.size(); j++) {
        //     vectin[i] = vectin[j];
        //     vectin.push_back(temp);
        
    }
    for (int output: vectin) {
        cout << output << " ";
    }
    cout << endl;
 }
