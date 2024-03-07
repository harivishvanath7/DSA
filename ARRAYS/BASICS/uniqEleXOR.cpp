#include <bits/stdc++.h>
using namespace std;

int uniqueEl(int arr[], int size){
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    int arr[100];

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int unique = uniqueEl(arr, n);

    cout << "The Unique Element is : " << unique;

    return 0;

}