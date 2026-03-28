#include <iostream>
#include <cstdlib>

using namespace std;

bool checkWin(char arr[4][4], char c) {
    for (int i = 0; i < 4; i++) {
        bool rowWin = true;
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] != c) {
                rowWin = false;
                break;
            }
        }
        if (rowWin) return true;
    }

    for (int i = 0; i < 4; i++) {
        bool colWin = true;
        for (int j = 0; j < 4; j++) {
            if (arr[j][i] != c) {
                colWin = false;
                break;
            }
        }
        if (colWin) return true;
    }

    bool diag1Win = true;
    for (int i = 0; i < 4; i++) {
        if (arr[i][i] != c) {
            diag1Win = false;
            break;
        }
    }
    if (diag1Win) return true;

    bool diag2Win = true;
    for (int i = 0; i < 4; i++) {
        if (arr[i][3 - i] != c) {
            diag2Win = false;
            break;
        }
    }
    if (diag2Win) return true;

    return false;
}
bool checkFull(char arr[4][4]) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == ' ') count++;
        }
    }
    if (count == 0 ||  count == 1) {
        return true;
    }
    return false;
}

int field(char arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        cout << " -----------------\n";
        for (int j = 0; j < 4; j++) {
            cout << " | " << arr[i][j];
        }
        cout << " |" << endl;
    }
    cout << " -----------------\n";
    return 0;
}

int main() {
    srand(time(0));
    int x, y;
    const int ROW = 4, COL = 4;
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
            int bot_x = rand() % 4, bot_y = rand() % 4;
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