#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int sum = 0;
    const int ROW = 3, COL = 3;
    int arr[ROW][COL];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = rand() % 9;
        }
    }
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr[i][j] << "  ";
            sum += arr[i][j];
        }
        cout << "| sum = " << sum;
        cout << endl;
        sum = 0;
    }
    cout << "---------" << endl;
    for (int i = 0; i < COL; i++) {
        for (int j = 0; j < ROW; j++) {
            sum += arr[j][i];
        }
        cout << sum << " ";
        sum = 0;
    }
}