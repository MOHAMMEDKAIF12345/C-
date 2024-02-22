#include <iostream>
using namespace std;

// Function to find minimum and maximum elements in an array
void findMinMax(int arr[], int size, int &min, int &max) {
    min = arr[0]; // Assume the first element as minimum
    max = arr[0]; // Assume the first element as maximum

    for (int i = 1; i < size; ++i) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, size, min, max);

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}
