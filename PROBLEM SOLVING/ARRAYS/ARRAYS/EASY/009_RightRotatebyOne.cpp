#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int d) {
    d = d % n;   
    // Step 1: Store the last `d` elements in the temp array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Step 2: Shift the remaining elements to the right
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }

    // Step 3: Move the elements from temp to the beginning of the array
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    } 
  
}

/*
OPTIMAL:
  reverse(arr, arr + n);      // Step 1: Reverse the entire array
  reverse(arr, arr + d);      // Step 2: Reverse the first d elements
  reverse(arr + d, arr + n);  // Step 3: Reverse the remaining elements
*/
int main() {
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int d;
    cout << "Enter the number of shifts: ";
    cin >> d;

    cout << "Array before rotating: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    rightRotate(arr, n, d);

    cout << "Array after rotating: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
