#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 7;
    int cnt = __builtin_popcount(num); // Count the number of set bits in num

    long long num1 = 12345676534LL;
    int cnt1 = __builtin_popcountll(num1); // Count the number of set bits in num1

    cout << "Number of set bits in " << num << " is: " << cnt << endl;
    cout << "Number of set bits in " << num1 << " is: " << cnt1 << endl;

    return 0;
}
