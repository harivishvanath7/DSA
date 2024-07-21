#include <bits/stdc++.h>
using namespace std;

int hashing(int arr[], int n, int num){
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == num){ 
            count++; 
        }
    }

    return count;
}

int main(){

    int arr[5] = {1,3,5,4,5};

    int res = hashing(arr, 5, 5);

    cout << "The result is : " << res;

    return 0;

}