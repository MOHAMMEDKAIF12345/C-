#include <iostream>
using namespace std;

// Function to count the number of elements (characters) in a string
int countElements(const char* str) {
    int count = 0;
    // Loop until the null terminator '\0' is encountered
    while (*str != '\0') {
        count++;
        str++; // Move to the next character
    }
    return count;
}

int main() {
    const char* str = "Hello, world!";
    int numElements = countElements(str);
    cout << "Number of elements in the string: " << numElements << endl;
    return 0;
}
