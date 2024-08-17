#include <bits/stdc++.h>
using namespace std;

int minElement(int arr[], int n){
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
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

    int res = minElement(arr, n);

    cout << "The minimum Element : " << res;
    
    return 0;
}