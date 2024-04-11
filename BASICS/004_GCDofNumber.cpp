#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cout << "Enter the two Numbers : ";
    cin >> a >> b;

    int n = min(a,b);

    int ans;

    for (int i = 1; i <= n; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }

    cout << "The GCD of " << a << " and " << b << " is : " << ans;

    return 0;    
}


/*
    USING EUCLIDEAN METHOD :-

        int gcd(int a, int b) {
            if (b == 0) {
                return a;
            }
            return gcd(b, a % b);
        }
*/