#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cout << "Enter a number : "; 
   cin >> n;

   int count = 0;

   if (n <= 1) {
        cout << n << " is not a prime number.";
        return 0;
    }

    // Check for divisors from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            break;  // If found a divisor, no need to check further
        }
    }

    // If count is still 0, then n is a prime number
    if (count == 0) {
        cout << n << " is a prime number.";
    } else {
        cout << n << " is not a prime number.";
    }

    return 0;
}