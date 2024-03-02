#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n){

    int max = INT_MIN;

    for (int i=0; i<n; i++){
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(){

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[100];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = findMax(arr, n);
    cout << "The maximum element is : " << max << endl;


    return 0;
}