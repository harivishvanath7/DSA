#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, sum;

    cout << "Enter the Number : ";
    cin >> n;

    for(int i=0; i <= n; i++){
        sum = sum + i;
    }

    cout << "The sum of first " << n << " Nos. is : " << sum;

    return 0;
}