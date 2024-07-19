#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, arr[50];
    cout << "Enter the Number of terms : ";
    cin >> n;

    // for 0 and 1 
    arr[0] = 0, arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    // printing the series
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}