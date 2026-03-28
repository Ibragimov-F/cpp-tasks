#include <iostream>
#include <cstdlib>

using namespace std;

bool checkWin(char arr[3][3], char c) {
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == c && arr[i][1] == c && arr[i][2] == c) return true;
        if (arr[0][i] == c && arr[1][i] == c && arr[2][i] == c) return true;
        if (arr[0][0] == c && arr[1][1] == c && arr[2][2] == c) return true;
        if (arr[2][0] == c && arr[1][1] == c && arr[0][2] == c) return true;
    }
    return false;
}
bool checkFull(char arr[3][3]) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == ' ') count++;
        }
    }
    if (count == 0 || count == 1) {
        return true;
    }
    return false;
}

int field(char arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        cout << " -------------\n";
        for (int j = 0; j < 3; j++) {
            cout << " | " << arr[i][j];
        }
        cout << " |" << endl;
    }
    cout << " -------------\n";
    return 0;
}

int main() {
    srand(time(0));
    int x, y;
    const int ROW = 3, COL = 3;
    char arr[ROW][COL]{};
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = ' ';
        }
    }
    do {
        system("cls");
        field(arr);
        do {
            cout << "Choose coordinates.\nx = ";
            cin >> x;
            cout << "y = ";
            cin >> y;
            if (arr[y - 1][x - 1] == 'O' ||  arr[y - 1][x - 1] == 'X') {
                cout << "Wrong coordinates, please, pick another!";
            }
            else {
                arr[y - 1][x - 1] = 'X';
                break;
            };
        } while (true);
        do {
            int bot_x = rand() % 3, bot_y = rand() % 3;
            if (arr[bot_x][bot_y] == ' ') {
                arr[bot_x][bot_y] = 'O';
                break;
            }
        } while (true);
        if (checkWin(arr, 'X')) {
            system("cls");
            field(arr);
            cout << "You win!\n";
            return 0;
        }
        else if (checkWin(arr, 'O')) {
            system("cls");
            field(arr);
            cout << "Bot win!\n";
            return 0;
        }
        if (checkFull(arr)) {
            system("cls");
            field(arr);
            cout << "Draw!\n";
            return 0;
        }
    } while (true);
}