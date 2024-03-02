#include <bits/stdc++.h>
using namespace std;

int productOfAll(int arr[], int size){
    
    int prod = 1;
    
    for(int i=0; i<size; i++){
        prod = prod * arr[i];
    }
    
    return prod;
}

int main(){

    int arr[100];

    int n; 
    cout << "Enter the size of the Array : ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int prod = productOfAll(arr, n);

    cout << "The Product of all elements : " << prod << endl;

    return 0;

}