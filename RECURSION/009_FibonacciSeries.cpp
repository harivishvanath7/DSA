#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    // Base cases: 
    if (n <= 1) return n;
    
    // Recursive case: 
    int last = n - 1;
    int secLast = n - 2;

    return fib(last) + fib(secLast);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The nth Fibonacci number is: " << fib(n) << endl;

    return 0;
}
