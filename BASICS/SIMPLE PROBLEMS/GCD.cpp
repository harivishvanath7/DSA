#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    
    // If a becomes 0, return b; otherwise, return a
    if (a == 0) return b;
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
