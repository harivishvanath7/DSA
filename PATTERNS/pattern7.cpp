#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    int scount = 1;
    while(i<=n){
        int j = 1;
        while(scount<=n){
            cout << "*";
            scount++;
            j++;
            
        }
        i++;
    }
    return 0;
}