#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

// In While Loop
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << n-j+1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }

// In For Loop
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << n-j+1;
        }
        cout << endl;
    }

    return 0;
    
}