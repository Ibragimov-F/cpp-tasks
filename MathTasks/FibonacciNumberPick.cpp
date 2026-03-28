#include <iostream>

using namespace std;

long fibonacci(long n) {
	if (n == 0 || n == 1) return n;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
	int n;
	cout << "Enter a position of any Fibonacci number: ";
	cin >> n;
	cout << "Result: " << fibonacci(n);
}