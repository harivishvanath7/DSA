#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // key - value pairs (key: unique) && (key: sorted) 
    
    // TC:- O(log n)
    
    map<int, int> mpp;

    map<int, pair<int, int>> mpp; // 2 val 1 key

    map<pair<int, int>, int> mpp; // 1 val 2 keys

    mpp[1] = 2; // k=1, val=2
    mpp.emplace({3, 1}); // k=3, val=1
 
    mpp.insert({2, 4}); // k,val stored

    mpp[{2, 3}] = 10; // k= {2,3} v = 10  

    // Sorted Order : 
    // {
    //     {1, 2};
    //     {2, 4};
    //     {3, 1};
    // }

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // o/p : 2
    cout << mpp[3]; // o/p : 0 (doesn't exist)

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    
    auto it = mpp.upper_bound(3); 

}

// MULTI MAP - duplicate keys, sorted order based on the key, O(log n)

// UNORDERED MAP - Unique Keys, No Sorting

/*
    MAP & MULTI MAP - Self-balancing binary search tree (Red-black Tree)
    UNORDERED MAP - Hash Table

*/