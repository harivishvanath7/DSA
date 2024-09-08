#include <bits/stdc++.h>
using namespace std;

string twoSum(int arr[], int n, int target) {
    sort(arr, arr+n);
    
    int left = 0, right = n - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main(){

    int n;
    cout << "Enter the no. of elements : ";
    cin >> n;

    int arr[n];

    cout << "Enter the Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int tar;
    cout << "Enter the Target element : ";
    cin >> tar;


    string res = twoSum(arr, n, tar);

    cout << "Result : " << res;

    return 0;
}


/*
BRUTE FORCE 
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j] == tar)
                return "Yes";
        }
    }
    return "No";

*/