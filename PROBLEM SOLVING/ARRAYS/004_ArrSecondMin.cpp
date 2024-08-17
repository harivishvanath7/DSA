#include <bits/stdc++.h>
using namespace std;

int secondMinElement(int arr[], int n){
    int min = INT_MAX;
    int secondMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != min)
        {
            secondMin= arr[i];
        }
    }
    
    return secondMin;
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

    int res = secondMinElement(arr, n);

    cout << "The Second Minimum Element : " << res;
    
    return 0;
}