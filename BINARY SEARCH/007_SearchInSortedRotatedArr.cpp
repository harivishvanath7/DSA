#include <bits/stdc++.h>
using namespace std;

int searchRotSorted(int arr[], int n, int k){
    
    int low = 0;
    int high = n-1;

    while(low <= high){

        int mid = (low + high) / 2;

        if(arr[mid] == k) return mid;

        // If Left half is Sorted
        if(arr[low] <= arr[mid]){
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }

        // If Right half is sorted
        else{
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){


    int arr[9] = {7, 8, 9, 1, 2, 3, 4, 5, 6};

    int tar;
    cout << "Enter the Element to search : ";
    cin >> tar;
    
    int res = searchRotSorted(arr, 9, tar);

    cout << "The location is : " << res;


    return 0;
}


