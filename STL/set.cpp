#include <bits/stdc++.h>
using namespace std;

int main(){
    set <int> s;

    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(9);
    s.insert(9);
    s.insert(1);

    cout << "Set Traversal : " << endl;
    for(int i:s){
        cout << i << " ";
    }cout << endl;

    s.erase(s.begin());

    cout << "Deleting First element : " << endl;
    for(int i:s){
        cout << i << " ";
    }cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it); 

    cout << "Deleting Second element : " << endl;
    for(int i:s){
        cout << i << " ";
    }cout << endl;

    set<int>::iterator itr = s.find(9);
    cout << "Element present at itr : " << *itr << endl;

    for(auto it=itr; it!=s.end(); it++){
        cout << *it << " ";
    }cout << endl;
    
    // Checking the existence
    cout << "Is 9 present ? : " << s.count(9) << endl;
    cout << "Is 8 present ? : " << s.count(8) << endl;

    return 0;
}