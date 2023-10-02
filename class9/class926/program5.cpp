#include<iostream>
using namespace std;

int main(){
int s = 0;
int i = 1;
while (i < 16){
     s = s + (i * i);
     i++;
}
cout << s << "\n";
}