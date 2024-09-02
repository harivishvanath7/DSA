#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k) return i;
    }
    
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The Array is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int k;
    cout << "Enter the element to search : ";
    cin >> k;

    int res = linearSearch(arr, n, k);
    
    cout << "The Result is " << res;

    return 0;
}
