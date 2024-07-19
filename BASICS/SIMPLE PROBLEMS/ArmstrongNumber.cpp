#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int dig, sum = 0, count = 0;
    int temp = n;

    // Find the number of digits
    while (n != 0) {
        n = n / 10;
        count++;
    }

    // Reset n to the original number
    n = temp;

    // Calculate the sum of the digits raised to the power of count
    while (n != 0) {
        dig = n % 10;
        sum = sum + pow(dig, count);
        n = n / 10;
    }

    // Check if the sum is equal to the original number
    if (temp == sum) {
        cout << temp << " is an Armstrong Number." << endl;
    } else {
        cout << temp << " is not an Armstrong Number." << endl;
    }

    return 0;
}