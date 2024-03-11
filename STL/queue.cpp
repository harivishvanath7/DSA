#include <bits/stdc++.h>
using namespace std;

int main(){

    queue <string> q;

    q.push("first");
    q.push("second");
    q.push("third");

    cout << "The First most Element : " << q.front() << endl;

    q.pop();

    cout << "The First most Element now : " << q.front() << endl;

    cout << "Size of Queue : " << q.size() << endl;

    cout << "Empty or not : " << q.empty() << endl;

}