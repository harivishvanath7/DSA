#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "The Reversed Array : " ;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    reverseArray(arr, n);

    return 0;
}