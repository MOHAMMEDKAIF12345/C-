#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
string reverseString(string str) {
    int length = str.length();
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Reverse the string
    string reversed = reverseString(input);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
