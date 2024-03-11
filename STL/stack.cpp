#include <bits/stdc++.h>
using namespace std;

int main(){

    stack <string> s;

    s.push("first");
    s.push("second");
    s.push("third");

    cout << "The Top most Element : " << s.top() << endl;

    s.pop();

    cout << "The Top most Element now : " << s.top() << endl;

    cout << "Size of Stack : " << s.size() << endl;

    cout << "Empty or not : " << s.empty() << endl;

}