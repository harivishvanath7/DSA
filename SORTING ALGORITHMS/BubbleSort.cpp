#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = n-1; i >= 1; i--)
    {
        int didSwap = 0; // Optimizing code for O(n^2) to O(n)
        for (int j = 0; j <= i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j+1], arr[j]);
                didSwap = 1;
            }
        }
        if (didSwap == 0) break;
    }
    

    // Printing the Array
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    
    
}

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    
    return 0;
}