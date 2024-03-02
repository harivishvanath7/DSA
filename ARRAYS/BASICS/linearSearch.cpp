#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int a, int size){

    for(int i=0; i<size; i++){
        if(arr[i] == a)
            return i;
    }
    return 0;
}

int main(){

    int arr[100];

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int pos = linearSearch(arr, 20, n);
    cout << "The position of 20 is : " << pos;

    return 0;
}