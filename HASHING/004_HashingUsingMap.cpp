#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of n : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // map<int, int> hash;
    unordered_map<int, int> hash; // preferred - low time complexity

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;
    
    while (q--)
    {
        int n;
        cin >> n;
        // fetch
        cout << hash[n] << endl;
    }
    return 0;
}