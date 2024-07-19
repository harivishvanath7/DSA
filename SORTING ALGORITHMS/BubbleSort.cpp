#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            swap(arr[j], arr[j+1]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

int main() {
    int n;

    cout << "Enter the size of array : ";
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
