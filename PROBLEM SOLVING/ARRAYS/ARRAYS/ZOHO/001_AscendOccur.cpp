#include <bits/stdc++.h>
using namespace std;

void ascendOccur(int arr[], int n) {
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi)
            maxi = arr[i];
    }

    int hash[maxi + 1] = {0};

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    
    for (int i = 0; i <= maxi; i++) {
        if (hash[i] > 0) {
            cout << hash[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[9] = {3, 4, 3, 4, 1, 2, 3, 1, 2}; 

    ascendOccur(arr, 9); 

    return 0;
}
