#include <bits/stdc++.h>
using namespace std;

int main() {
    int capacity = 100;  // Maximum array size
    int arr[capacity];
    int n;               // Current number of elements

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pos, val;
    cout << "Enter position to insert (0-based index): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    if (n >= capacity) {
        cout << "Array is full. Cannot insert.\n";

    } else if (pos < 0 || pos > n) {
        cout << "Invalid position.\n";

    } else {
        // Shift elements to the right
        for (int i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }

        // Insert the new element
        arr[pos] = val;
        n++;  // Increase size

        // Print updated array
        cout << "Array after insertion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}