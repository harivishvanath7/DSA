#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){

    for(int i=0; i<n; i+=2){
        if(i+1<n)
            swap(arr[i], arr[i+1]);
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