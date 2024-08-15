#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 4, 4, 4, 6, 8};

    int target = 4;

    // Check if the target value is present in the vector using binary_search
    bool found = binary_search(vec.begin(), vec.end(), target);

    if (found) {
        cout << "Element " << target << " is found in the vector." << endl;
    } else {
        cout << "Element " << target << " is not found in the vector." << endl;
    }

    return 0;
}
