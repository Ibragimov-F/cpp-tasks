#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int check = 0;
    const int SIZE = 10;
    int arr[SIZE]{ 2,6,3,2,1,1,2,7,7 };
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == check) {
            i++;
        }
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                check = arr[i];
                cout << arr[i] << " ";
                break;
            }
        }
    }
}