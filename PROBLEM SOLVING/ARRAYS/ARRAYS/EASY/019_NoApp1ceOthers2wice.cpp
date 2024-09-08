#include <bits/stdc++.h>
using namespace std;

int elApp1ce2ce(int arr[], int n){
    int ans = arr[0];
    for (int i = 1; i <= n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {1,1,4,3,4};

    int res = elApp1ce2ce(arr, 5);

    cout << "The Number That appears once while others twice is : " << res;

    return 0;
}

/*
BRUTE FORCE - Count

    for (int i = 0; i < n; i++) {
        int num = arr[i]; 
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }

        if (cnt == 1) return num;
    }

    return -1;
*/