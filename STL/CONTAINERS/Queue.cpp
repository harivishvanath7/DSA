#include <bits/stdc++.h>
using namespace std;

int main(){

    // LIFO -> Last In First Out; all operations -> O(1)

    queue<int> q;

    q.push(1);
    q.push(2);

    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9}

    cout << q.back(); // 9

    cout << q.front(); // 1

    q.pop(); // {2, 9}

    cout << q.front();
}