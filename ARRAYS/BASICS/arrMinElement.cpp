#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int n){

    int mini = INT_MAX;

    for (int i=0; i<n; i++){
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main(){

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[100];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int min = findMin(arr, n);
    cout << "The minimum element is : " << min << endl;


    return 0;
}