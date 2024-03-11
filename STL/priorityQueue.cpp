#include <bits/stdc++.h>
using namespace std;

int main(){

    // Max-heap - 1st element = Max
    priority_queue <int> maxi;

    // Min-heap - 1st element = Min
    priority_queue <int, vector<int>, greater<int> > mini;

    // Pushing Elements in Max Heap
    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(2);

    int n = maxi.size();

    // Traversal
    for(int i=0; i<n; i++){
        cout << maxi.top();
        maxi.pop();
    }
    cout << endl;

    // Pushing Elements in Min Heap
    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(2);

    int m = mini.size();

    // Traversal
    for(int i=0; i<m; i++){
        cout << mini.top();
        mini.pop();
    }
    cout << endl;

    return 0;
}