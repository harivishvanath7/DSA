#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int num){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == num)
            return i;
    }
    return -1;
    
}

int main(){

    int n, num;
    cout << "Enter the no. of Array Elements : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The number to find : ";
    cin >> num;

    int res  = linearSearch(arr, n, num);

    cout << "The Number " << num << " is present at " << res << " index";

    return 0;
}