#include <bits/stdc++.h>
using namespace std;

/*
lower_bound: Finds the first element that is not less than the given value.
upper_bound: Finds the first element that is greater than the given value.
*/
int main() {
    vector<int> vec = {1, 2, 4, 4, 4, 6, 8};

    // Finding the first position where 4 could be inserted without violating the order
    auto low = lower_bound(vec.begin(), vec.end(), 4);
    cout << "Lower bound of 4 is at position: " << (low - vec.begin()) << endl;

    // Finding the first position after the last occurrence of 4
    auto up = upper_bound(vec.begin(), vec.end(), 4);
    cout << "Upper bound of 4 is at position: " << (up - vec.begin()) << endl;

    return 0;
}
