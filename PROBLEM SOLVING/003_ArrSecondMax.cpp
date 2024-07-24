#include <bits/stdc++.h>
using namespace std;

int secondMaxElement(int arr[], int n){
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }

    return secondMax;
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

    int res = secondMaxElement(arr, n);

    cout << "The Second Maximum Element : " << res;
    
    return 0;
}