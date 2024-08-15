#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1); // creates array copy and then occurs
    v.emplace_back(2); // dynamically expands the space and allocates

    vector<pair<int, int>> vec;

    v.push_back({1,2});
    v.emplace_back(1, 2);

    vector<int> v(5, 100); // All initialised to 100 

    vector<int> v(5); // All initialised to 0

    vector<int> v(5, 20); // All initialised to 20
    vector<int> v2(v1);  // Creates a vector `v2` as a copy of `v1`.

    // Iterator

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    // Explanation:
    // - Initializes an iterator 'it' to the beginning of vector 'v'.
    // - Moves 'it' to point to the second element by incrementing it.
    // - Dereferences 'it' to get the value of the second element and prints it.
    // Example:
    // If v = {10, 20, 30}, then output will be "20 ".

    vector<int>::iterator it = v.end();
    // Explanation:
    // - Sets iterator 'it' to point just past the last element of vector 'v'.
    // - Be cautious: Dereferencing 'it' at this point is undefined behavior.

    vector<int>::iterator it = v.rend();
    // Explanation:
    // - Incorrect usage: 'rend()' returns a reverse iterator.
    // - Should declare as 'reverse_iterator' instead.
    // Correct usage:
    // vector<int>::reverse_iterator it = v.rend();

    vector<int>::iterator it = v.rbegin();
    // Explanation:
    // - Incorrect usage: 'rbegin()' returns a reverse iterator.
    // - Should declare as 'reverse_iterator' instead.
    // Correct usage:
    // vector<int>::reverse_iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    // Explanation:
    // - Prints the first element of vector 'v' in two ways.
    // - 'v[0]' uses operator[], no bounds checking.
    // - 'v.at(0)' uses 'at()' method, which includes bounds checking.
    // Example:
    // If v = {10, 20, 30}, then output will be "10 10".

    cout << v.back() << " ";
    // Explanation:
    // - Prints the last element of vector 'v'.
    // Example:
    // If v = {10, 20, 30}, then output will be "30 ".

    // Traversing

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    // Explanation:
    // - Traditional way to iterate through 'v' using an iterator.
    // - Starts from 'v.begin()' and goes until 'v.end()', printing each element.
    // Example:
    // If v = {10, 20, 30}, then output will be "10 20 30 ".

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    // Explanation:
    // - Similar to the previous loop but uses 'auto' for type deduction of the iterator.
    // - Makes the code cleaner and less verbose.

    for (auto it : v)
    {
        cout << it << " ";
    }
    // Explanation:
    // - Range-based for loop iterating over each element in 'v'.
    // - 'it' directly holds the value of each element.
    // Example:
    // If v = {10, 20, 30}, then output will be "10 20 30 ".

    v.erase(v.begin() + 1);
    // Explanation:
    // - Removes the element at index 1 (second element) from vector 'v'.
    // - The rest of the elements shift to fill the gap.
    // Example:
    // If v = {10, 20, 30}, after this operation, v = {10, 30}.

    v.erase(v.begin() + 2, v.begin() + 4);
    // Explanation:
    // - Removes elements in the range [index 2, index 4) i.e., elements at indices 2 and 3.
    // - The element at index 4 is not removed.
    // Example:
    // If v = {10, 20, 30, 40, 50}, after this operation, v = {10, 20, 50}.


    // Inserting in Vector


    vector<int> v(2, 100); // {100, 100}

    v.insert(v.begin(), 300); // {300, 100, 100} - inserts at the beginning
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // copying one array into this copy -> v  {50, 50, 300, 10, 10, 100, 100}

    cout << v.size(); // Size of vector

    // Deletion


    v.pop_back(); // Removes last element

    // Swapping
    vector<int> v1 = {10, 20}; 
    vector<int> v2 = {30, 40};

    v1.swap(v2); 

    // Erases the entire vector
    v.clear();

    cout << v.empty(); // empty?? - true/ false
    

}