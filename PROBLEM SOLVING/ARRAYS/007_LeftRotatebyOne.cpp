#include <bits/stdc++.h>
using namespace std;

void leftRotByOne(int arr[], int n){
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void rightRotByOne(int arr[], int n) {    
    int last = arr[n-1]; // Store the last element
    
    for (int i = n-1; i > 0; i--){
        arr[i] = arr[i-1]; // Shift elements to the right
    }
    
    arr[0] = last; // Place the last element at the beginning
}



int main(){

    int n;
    cout << "Enter the no. of Array Elements : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Rotation : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    rightRotByOne(arr, n);

    cout << "After Rotation : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}