#include <bits/stdc++.h>
using namespace std;

void leftRotByD(int arr[], int n, int d){
    d = d % n;
    int temp[n];

    for (int i = 0; i < d; i++){
        temp[i] = arr[i];
    }

   for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

/*
OPTIMAL:
reverse(a, a+d);
reverse(a+d, a+n);
reverse(a, a+n);
*/


int main(){
    int n;
    cout << "Enter the No of Array Elements : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int d;
    cout << "Enter the No of Shifts : ";
    cin >> d;

    cout << "Array before rotating : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    leftRotByD(arr, n, d);

    cout << "Array after rotating : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}