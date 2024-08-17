#include <iostream>
using namespace std;

void arrayReverse(int arr[], int f, int r){
    if(f >= r) return;
    
    swap(arr[f], arr[r]);
    arrayReverse(arr, f + 1, r - 1);
}

// Using 1 variable
void arrayRev1Var(int arr[], int n, int i){
    if(i >= n/2) return;
    
    swap(arr[i], arr[n-i-1]);
    arrayRev1Var(arr, n, i + 1);
}

int main(){
    int n;
    cout << "Enter the Size of the Array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // arrayReverse(arr, 0, n-1);
    arrayRev1Var(arr, n, 0);

    // Reversed Array  
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}