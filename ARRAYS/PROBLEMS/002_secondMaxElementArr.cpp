#include <bits/stdc++.h>
using namespace std;

int findSecondMax(int arr[], int n){
    int max = 0, secondMax = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] != max){
            if(arr[i] > secondMax){
                secondMax = arr[i];
            }
        }
    }

    return secondMax;
}


int main(){
  
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[100];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int secondMax = findSecondMax(arr, n);

    cout << "The Second Largest element of the array is : " << secondMax;

    return 0;
}