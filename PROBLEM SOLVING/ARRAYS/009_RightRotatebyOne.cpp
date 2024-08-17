#include <bits/stdc++.h>
using namespace std;

void rightRotByOne(int arr[], int n){
    int temp = arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    
}

int main(){

    int n;
    cout << "Enter the no. of Array Elements : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Rotation : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    rightRotByOne(arr, n);

    cout << "After Rotation : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}