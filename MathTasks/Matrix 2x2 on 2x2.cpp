#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int result = 0;
    const int ROW = 2, COL = 2;
    int arr_fst[ROW][COL], arr_scd[ROW][COL], arr_result[ROW][COL]{};
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr_fst[i][j] = rand() % 10;
            arr_scd[i][j] = rand() % 10;
        }
    }
    cout << "First matrix: \n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr_fst[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Second matrix: \n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr_scd[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            for (int k = 0; k < ROW; k++) {
                arr_result[i][j] += arr_fst[i][k] * arr_scd[k][j];
            }
        }
    }
    cout << "\nResult of multiplication: \n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr_result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}