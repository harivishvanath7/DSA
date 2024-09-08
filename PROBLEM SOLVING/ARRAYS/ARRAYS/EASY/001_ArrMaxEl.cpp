#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n){
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main(){

    int n;
    cout << "Enter the no. of elements : ";
    cin >> n;

     if (n <= 0) {
        cout << "Invalid number of elements." << endl;
        return 1;
    }
    
    int arr[n];

    cout << "Enter the Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = maxElement(arr, n);

    cout << "The Maximum Element : " << res;
    
    return 0;
}