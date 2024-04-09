#include<bits/stdc++.h>
using namespace std;

int main()
{
       int f[100];
       f[0] = 1;
       f[1] = 1;

       int n;
       cin >> n;

       // Fibonacci Series
       for (int i = 2 ; i < n; i++) {
               f[i] = f[i-1] + f[i-2];
       }

       // Printing the series
       for (int i = 0 ; i < n; i++) {
               cout << f[i] << " ";
       }
       cout << endl;

       // Nth Fibonacci Number
       cout << f[n-1] << endl;

}
