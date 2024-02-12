#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

// In While Loop
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

// In For Loop
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}