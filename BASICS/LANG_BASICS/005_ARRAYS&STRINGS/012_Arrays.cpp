#include <bits/stdc++.h>
using namespace std;

int main(){

    // Array Declaration
    int arr1[5] = {1, 2, 3, 4, 5};

    // Size of Array
    int n = sizeof(arr1) / sizeof(arr1[0]);

    // Array Traversal
    for(int i=0; i<n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr2[4];

    cout << "Enter Arr 2 values : ";
    // Getting Array Input
    for(int i=0; i<4; i++){
        cin >> arr2[i];
    }

    // Display Output
    for(int i=0; i<4; i++){
        cout << arr2[i] << " ";
    }

    return 0;
}