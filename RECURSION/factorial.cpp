# include <bits/stdc++.h>
using namespace std;

int factorial(int n){

    // Base case
    if(n == 0){
        return 1;
    }

    int small = factorial(n-1);
    int big = n * small;

    return big;
}

int main(){

    cout << "Enter a Number : ";
    int n;
    cin >> n;

    int result = factorial(n);
    cout << "The factorial of " << n << " is " << result;

    return 0;
}















