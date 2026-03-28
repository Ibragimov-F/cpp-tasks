#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int factorial(int a) {
    int x = 1;
    for (int i = 1; i <= a; i++) {
        x *= i;
    }
    return x;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << factorial(x);
}