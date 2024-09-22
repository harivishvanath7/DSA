#include <bits/stdc++.h>
using namespace std;

void floor(int arr[], int n, int tar){
    int low = 0;
    int high = n-1;

    int floor = -1;

    while(low <= high){

        int mid = low + (high-low)/2;

        if(arr[mid] <= tar){
            floor = mid;
            low = mid + 1; // the largest no. - so left side eliminated
        }
        else{
            high = mid - 1;
        }
    }
    cout << "The Floor is : " << arr[floor] << endl;
}

void ceil(int arr[], int n, int tar){
    int low = 0;
    int high = n-1;

    int ceil = -1;

    while(low <= high){

        int mid = low + (high-low)/2;

        if(arr[mid] >= tar){
            ceil = mid;
            high = mid - 1; // the smallest no. - so right side eliminated
        }
        else{
            low = mid + 1;
        }
    }
    cout << "The Ceil is : " << arr[ceil];
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
    
    ceil(arr, n, tar);
    floor(arr, n, tar);

    return 0;
}

/*
   STL:-

   int lb = lower_bound(arr.begin(),arr.end(),element)-arr.begin();
*/

