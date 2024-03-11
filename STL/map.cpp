#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int, string> m;

    m[1] = "hari";
    m[2] = "vishva";
    m[15] = "lol";

    m.insert({5, "hello"});

    // Checking the existence
    cout << "Is 9 present ? : " << m.count(9) << endl;
    cout << "Is 15 present ? : " << m.count(15) << endl;

    // Iteration
    
    // Before deleting 5
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    // After deleting 5
    m.erase(5);
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    // Find operation
    map<int,string>::iterator itr = m.find(2);
    
    cout << "Element present at itr : " << (*itr).second << endl;


}