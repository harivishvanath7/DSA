#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[(i+k)%n] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[100];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    cout << "The Given Array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    rotateArray(arr, n, k);

    cout << "\nThe Rotated Array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
