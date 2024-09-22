#include <bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int n, int tar){
    int low = 0;
    int high = n-1;

    int lb = n;

    while(low <= high){

        int mid = low + (high-low)/2;

        if(arr[mid] >= tar){
            lb = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return lb;
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
    
    int res = lowerBound(arr, n, tar);

    cout << "The Lower Bound is : " << res;

    return 0;
}

/*
   STL:-

   int lb = lower_bound(arr.begin(),arr.end(),element)-arr.begin();
*/

