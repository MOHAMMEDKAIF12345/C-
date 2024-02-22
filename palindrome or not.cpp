#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    // Continue until the pointers meet
    while (left < right) {
        // Skip non-alphanumeric characters from left
        while (!isalnum(str[left]) && left < right)
            left++;
        // Skip non-alphanumeric characters from right
        while (!isalnum(str[right]) && left < right)
            right--;
        
        // If characters at current pointers are not equal, return false
        if (tolower(str[left]) != tolower(str[right]))
            return false;

        // Move pointers towards each other
        left++;
        right--;
    }
    // If no inequality found, it's a palindrome
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Check if the input string is a palindrome
    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
