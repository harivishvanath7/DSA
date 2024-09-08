#include <bits/stdc++.h>
using namespace std;

int maxConsec1s(int arr[], int n){
   int maxCount = 0;
   int count = 0;
   for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++; 
        } else {
            maxCount = max(maxCount, count);  
            count = 0;  
        }
    }
    
    maxCount = max(maxCount, count);
    
    return maxCount;
}

int main(){
    int arr[8] = {1,0,0,1,1,1,1,0};

    int res = maxConsec1s(arr, 8);

    cout << "The maximum consecutive 1s are : " << res;

    return 0;
}