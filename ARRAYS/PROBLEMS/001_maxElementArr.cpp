#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n){
    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        if (arr[i] > max)
        {
            max = arr[i];
        }        
    }
    return max;
}
int main(){

    int arr[] = {3,45,3,5,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = maxElement(arr, n);

    cout << "The Maximum element of the Given Array is : " << res;

    return 0;
}