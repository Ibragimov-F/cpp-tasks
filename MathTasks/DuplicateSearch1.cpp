#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int arr[5]{ 0 };
    bool printed[5]{ false };

    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 5;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ' ';
    }

    cout << "\nDuplicate elements: ";

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j] && !printed[i]) {
                cout << arr[i] << ' ';
                printed[i] = true;
                break;
            }
        }
    }

    cout << endl;
    return 0;
}