#include <bits/stdc++.h>
using namespace std;

int factOfN(int n){
    if(n == 0) return 1;
    return n * factOfN(n-1);
}

int main(){
    int n;
    cout << "Enter the Value of N : ";
    cin >> n;

    cout << "The factorial of " << n << " is : " << factOfN(n);

    return 0;
}