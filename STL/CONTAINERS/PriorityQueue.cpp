#include <bits/stdc++.h>
using namespace std;

int main(){

    // Greatest element is stored at top -> follows a Tree
    // push, pop -> O(log n), top -> O(1)

    // MAXIMUM HEAP
    priority_queue<int> pq;

    pq.push(5); 
    pq.push(2); 
    pq.push(8);

    pq.emplace(10); 

    cout << pq.top();

    pq.pop();

    cout << pq.top();
    // other functions same

    // MINIMUM HEAP

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5); 
    pq.push(2); 
    pq.push(8);

    pq.emplace(10); 

    cout << pq.top();

}