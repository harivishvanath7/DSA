#include <iostream>
#include <utility>
using namespace std;

int main() {
    
    // Pairs - utility class
    pair<int, string> p1;
    
    p1.first = 1;
    p1.second = "example";

    cout << "Pair: " << p1.first << ", " << p1.second << endl;

    // Nested Pairs - More than 2 values
    pair<int, pair<int, int>> p = {1, {2, 3}};

    cout << p.first << " " << p.second.first << " " << p.second.second;

    // Pair Array
    pair<int, int> arr[] = {{1,2}, {3,4}, {4,5}};

    cout << arr[1].second;
    
    return 0;
}
