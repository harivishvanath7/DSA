#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target){ 

    if(low > high) return -1;
    
    int mid = low + (high - low) / 2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] > target){
        return binarySearch(arr, low, mid-1, target);
    }
    
    return binarySearch(arr, mid+1, high, target);
}


int main(){

    int n;
    cout << "Enter the size of Array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the Array Elements : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int tar;
    cout << "Enter the Element to search : ";
    cin >> tar;

    int low = 0;
    int high = n-1;
    
    int res = binarySearch(arr, low, high, tar);

    cout << "The location is : " << res;

    return 0;
}