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



    // Inserting in Vector


    vector<int> v(2, 100); // {100, 100}

    v.insert(v.begin(), 300); // {300, 100, 100} - inserts at the beginning
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // copying one array into this copy -> v  {50, 50, 300, 10, 10, 100, 100}

    cout << v.size(); // Size of vector

    v.pop_back(); // Removes last element

    // Swapping
    vector<int> v1 = {10, 20}; 
    vector<int> v2 = {30, 40};

    v1.swap(v2); 

    // Erases the entire vector
    v.clear();

    cout << v.empty(); // empty?? - true/ false
    

}