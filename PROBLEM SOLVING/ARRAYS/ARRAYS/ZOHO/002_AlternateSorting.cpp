#include <bits/stdc++.h>
using namespace std;

void alterSort(int arr[], int n){
    
    sort(arr, arr + n);

    int left = 0;         
    int right = n - 1;    
    
     while (left < right) {
        cout << arr[right--] << " ";
        
        if (left <= right) {
            cout << arr[left++] << " ";
        }
    }

    if (n % 2 != 0) {
        cout << arr[left];
    }
    
    cout << endl;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};

    alterSort(arr, 7);

    return 0;
}