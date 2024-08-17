#include <bits/stdc++.h>
using namespace std;

// Parameterised Recursion
void printSum(int n, int sum){
    if(n<1){
        cout << sum;
        return;
    }
    printSum(n-1, sum+n);
}

// Functional Recursion
int printNSum(int n){
    if(n == 0) return 0;
    return n + printNSum(n-1);
}

int main(){

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int res = printNSum(n);

    cout << "The Sum is : " << res;

    return 0;
}