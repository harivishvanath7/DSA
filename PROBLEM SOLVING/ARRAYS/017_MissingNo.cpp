#include <bits/stdc++.h>
using namespace std;

int missingNo(int arr[], int N){
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ arr[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2);
}


int main(){
    int arr[6] = {3,1,2,5,4};

    int res = missingNo(arr, 6);

    cout << "The missing Number is : " << res;

    return 0;
}

/*
BRUTE FORCE :
    for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N - 1; j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;


BETTER - HASHING:
    int hash[N + 1] = {0}; 

    for (int i = 0; i < N - 1; i++){
        hash[arr[i]]++;
    }

    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    return -1;

OPTIMAL - SUM OF N:
    int sum = (n * (n+1))/2;
    int arrSum = 0;
    
    for (int i = 0; i < n; i++){
        arrSum += arr[i];
    }

    int res = sum - arrSum;

    return res;

*/