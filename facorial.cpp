#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is negative
    if (num < 0) {
        cout << "Factorial of a negative number is not defined.";
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num);
    }

    return 0;
}
