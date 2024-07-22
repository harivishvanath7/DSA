#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

    for (int i = 0; i <= n-2; i++)
    {
        int min = i;
        for (int j = i; j <= n-1; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    
    // Print the Array
    cout << "The Sorted Array : "; 
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

    selectionSort(arr, n);
    
    return 0;
}