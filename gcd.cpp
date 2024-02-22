#include <iostream>
using namespace std;

// Function to find GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Check if inputs are non-negative
    if (num1 < 0 || num2 < 0) {
        cout << "GCD is not defined for negative numbers." << endl;
    } else {
        // Find GCD
        int result = gcd(num1, num2);
        cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    }

    return 0;
}
