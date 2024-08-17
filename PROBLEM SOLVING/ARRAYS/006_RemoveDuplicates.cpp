#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;  // Handle edge case where array is empty

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter the array elements (sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = removeDuplicates(arr, n);

    cout << "The new length of the array is: " << res << endl;
    cout << "The array after removing duplicates is: ";
    for (int i = 0; i < res; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
