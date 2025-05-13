// WAP to print Fibonacci series using recursion.
#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci number at position n
int fibonacci(int n) {
    if (n == 0) return 0;        // Base case
    if (n == 1) return 1;        // Base case
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
