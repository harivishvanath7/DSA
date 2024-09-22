#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    
    int low = 0;
    int high = n-1;

    while(low <= high){

        int mid = (low + high) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
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
    
    int res = binarySearch(arr, n, tar);

    cout << "The location is : " << res;

    return 0;
}