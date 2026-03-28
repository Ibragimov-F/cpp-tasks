#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void main() {
    srand(time(NULL));
    int sum = 0;
    const int ROW = 4, COL = 3;
    int arr[ROW][COL];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = rand() % 9;
        }
    }
    cout << "Original list: \n";
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Changed list: \n";
    for (int i = 0; i < COL; i++) {
        for (int j = 0; j < ROW; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}