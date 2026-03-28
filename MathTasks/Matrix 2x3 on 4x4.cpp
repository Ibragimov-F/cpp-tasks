#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    const int A = 2, B = 3, C = 4;
    int arr_fst[A][B], arr_scd[B][C], arr_result[A][C]{};
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            arr_fst[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < B; i++) {
        for (int j = 0; j < C; j++) {
            arr_scd[i][j] = rand() % 10;
        }
    }
    cout << "First matrix: \n";
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout << arr_fst[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Second matrix: \n";
    for (int i = 0; i < B; i++) {
        for (int j = 0; j < C; j++) {
            cout << arr_scd[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < B; k++) {
                arr_result[i][j] += arr_fst[i][k] * arr_scd[k][j];
            }
        }
    }
    cout << "\nResult of multiplication: \n";
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < C; j++) {
            cout << arr_result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}