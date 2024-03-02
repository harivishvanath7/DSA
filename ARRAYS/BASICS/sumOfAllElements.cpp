#include <bits/stdc++.h>
using namespace std;

int sumOfAll(int arr[], int size){
    
    int sum = 0;
    
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    
    return sum;
}

int main(){

    int arr[100];

    int n; 
    cout << "Enter the size of the Array : ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum = sumOfAll(arr, n);

    cout << "The sum of all elements : " << sum << endl;

    return 0;

}