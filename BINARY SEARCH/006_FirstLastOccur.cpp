#include <bits/stdc++.h>
using namespace std;

int firstIndex(int arr[], int n, int tar){
    
    int low = 0;
    int high = n-1;

    int first = -1;

    while (low <= high)
    {
        int mid = low + (high-low) / 2;

        if (arr[mid] == tar){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < tar){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

    }
    return first;
}

int lastIndex(int arr[], int n, int tar){

    int low = 0;
    int high = n-1;

    int last = -1;

    while(low <= high){

        int mid = low + (high-low) / 2;

        if(arr[mid] == tar){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] > tar){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return last;
}

int main(){


    int arr[6] = {3, 4, 4, 7, 8, 10};

    int tar;
    cout << "Enter the Element to search : ";
    cin >> tar;

    
    int first = firstIndex(arr, 6, tar);

    cout << "The First index is : " << first;
   
    cout << endl;

    int last = lastIndex(arr, 6, tar);

    cout << "The Last index is : " << last;

    return 0;
}



/*
 BRUTE :-  O(N)

void firstLast(int arr[], int n, int tar){
    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar)
        {
            if (first == -1) first = i;
            last = i;
        }
    }
    
    cout << "The First : " << first << " And the Last : " << last;
}


OTHER WAY: (Applicable for present elements only)

first - lower_bound
last - upper_bound - 1
*/