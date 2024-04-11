#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Accessing elements
    cout << "Element at index 2: " << arr.at(2) << endl;
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    // Modifying elements
    arr.fill(0); // Fill with zeros
    cout << "Array after filling with zeros: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Size
    cout << "Size of array: " << arr.size() << endl;

    // Iterating over elements
    cout << "Array elements: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
