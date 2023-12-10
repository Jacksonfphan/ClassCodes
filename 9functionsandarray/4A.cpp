#include<iostream>
using namespace std;
void multAndprint(double A[3][3], double B[3][3]) {
    double res[3][3] {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int a = 0; a < 3; a++) {
                 res[i][j] += A[i][a] * B[a][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << res[i][j] << " ";
        }
    }

}
int main () {
    double A[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    double B[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }
    multAndprint(A, B);
}