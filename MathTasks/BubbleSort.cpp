#include <iostream>
#include <ctime>

using namespace std;

void bubbleSort(const int size, int arr[]) {
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
void printArray(const int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    const int SIZE = 5;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 20;
    }
    cout << "Original: \n";
    printArray(SIZE, arr);
    bubbleSort(SIZE, arr);
    cout << "\nSorted: \n";
    printArray(SIZE, arr);
}