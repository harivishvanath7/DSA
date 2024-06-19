#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, i, fact;

    cout << "Enter the number : ";
    cin >> n;

    i = 1, fact = 1;

    while (n >= i)
    {
        fact = fact * i;
        i++;
    }
    
    cout << "The factorial of " << n << " is : " << fact;

    return 0;
}