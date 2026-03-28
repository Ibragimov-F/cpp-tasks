#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

bool isPrime(int a) {
    if (a <= 1) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;

    for (int i = 3; i <= sqrt(a); i += 2) {
        if (a % i == 0) return false;
    }
    return true;
}
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (isPrime(a)) {
        cout << "Number is prime!";
    }
    else {
        cout << "Number is not prime!";
    }
}