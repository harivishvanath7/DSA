#include <bits/stdc++.h>
using namespace std;

int main() {
     vector<int> vec = {1, 3, 5, 2, 4};

    auto max_it =  max_element(vec.begin(), vec.end());

     cout << "Max element is " << *max_it <<  endl;

    auto min_it =  min_element(vec.begin(), vec.end());

     cout << "Min element is " << *min_it <<  endl;

    return 0;
}
