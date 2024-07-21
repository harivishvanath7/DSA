#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-computing
    int hash[100] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    

    int q;
    cout << "Enter the query : ";
    cin >> q;

    while (q--)
    {
        int number;
        cin >> number;
        // fetching
        cout << number << " occurs " << hash[number] << " times." << endl;
    }
    
    return 0;

}