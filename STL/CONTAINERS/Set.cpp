#include <bits/stdc++.h>
using namespace std;

int main(){

    // Stores Sorted and Unique elements

    set<int> st;

    s.insert(1); 
    s.emplace(2); 
    s.insert(2); // duplicate not allowed 
    s.insert(4); 
    s.insert(4); 

    auto it = st.find(3)
    
    auto it = st.find(6) // if not found it'll return st.end()

    st.erase(5); // deletes 5 -> lograithmic time; sorted order maintained

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2); // dletes between range i.e., [2,4)

    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);

// st.lower_bound(2)
// Definition: Returns an iterator pointing to the first element in the set that is not less than (i.e., greater than or equal to) 2.
// Example: If st = {1, 2, 4, 5}, then st.lower_bound(2) will return an iterator pointing to the element 2.
// If 2 is not present: It returns an iterator to the next higher element (e.g., if st = {1, 3, 4, 5}, it will return an iterator pointing to 3).

// st.upper_bound(3)
// Definition: Returns an iterator pointing to the first element in the set that is greater than 3.
// Example: If st = {1, 2, 3, 4, 5}, then st.upper_bound(3) will return an iterator pointing to the element 4.
// If no such element exists: It returns st.end().



}