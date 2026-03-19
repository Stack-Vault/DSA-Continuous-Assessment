#include <bits/stdc++.h>
using namespace std;

int main() {
    int capacity = 100;  // Max array size
    int arr[capacity];
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position to delete (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position.\n";

    } else {
        // Shift elements to the left
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;  // Decrease size

        // Print updated array
        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}