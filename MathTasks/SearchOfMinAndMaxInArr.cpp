#include<iostream>
#include<string>
#include<ctime>

using namespace std;

int main() {
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE]{};
    int min = 20, max = arr[0];
    bool alreadyThere;

    for (int i = 0; i < SIZE;) {
        alreadyThere = false;
        int newRandomValue = rand() % 20;

        for (int j = 0; j < i; j++) {
            if (arr[j] == newRandomValue) {
                alreadyThere = true;
                break;
            }
        }
        if (!alreadyThere) {
            arr[i] = newRandomValue;
            if (arr[i] < min) {
                min = arr[i];
            }
            if (arr[i] > max) {
                max = arr[i];
            }
            i++;
        }

    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << ' ';
    }
    cout << "\n\nMinimum number is array is: " << min << endl;
    cout << "Maximum number is array is: " << max << endl;
}