#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])   // j > 0 coz, if not it'll consider -1th index
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
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

    insertionSort(arr, n);
    
    return 0;
}