#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int fibonacci(int a) {
    int num_one = 1, num_two = 0, next = 0;
    for (int i = 0; i < a; i++) {
        next = num_one + num_two;
        num_two = num_one;
        num_one = next;
    }
    return num_one;
}

int main() {
    srand(time(NULL));
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x > 3) cout << x << "th" << " Fibonacci digit is: " << fibonacci(x);
    else if (x == 1) cout << x << "st" << " Fibonacci digit is: " << fibonacci(x);
    else if (x == 2) cout << x << "nd" << " Fibonacci digit is: " << fibonacci(x);
    else if (x == 3) cout << x << "rd" << " Fibonacci digit is: " << fibonacci(x);
    else {
        cout << "You must enter number higher than 0!";
    }
}