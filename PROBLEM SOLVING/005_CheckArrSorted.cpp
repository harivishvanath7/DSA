#include <bits/stdc++.h>
using namespace std;

bool isArrSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool res = isArrSorted(arr, n);

    if (res) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
