#include <iostream>
using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Check if radius is non-negative
    if (radius < 0) {
        cout << "Radius cannot be negative." << endl;
    } else {
        // Calculate area using the function
        double area = calculateArea(radius);
        cout << "Area of the circle with radius " << radius << " is: " << area << endl;
    }

    return 0;
}
