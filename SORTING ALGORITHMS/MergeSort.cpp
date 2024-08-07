#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    // Merge the two halves into temp
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } 
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy the remaining elements of the left subarray, if any
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy the remaining elements of the right subarray, if any
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the sorted subarray into the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    
    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
