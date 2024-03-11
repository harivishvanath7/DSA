#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    cout << "Vector Traversing : " << endl;
    for(int i:v){
        cout << i << " ";
    }

    cout << "The capacity of Vector : " << v.capacity() << endl;
    cout << "The size of Vector : " << v.size() << endl;

    cout << "Element at 2nd index : " << v.at(2) << endl;

    cout << "1st Element : " << v.front() << endl;
    cout << "Last Element : " << v.back() << endl;

    cout << "The Vector before popping : ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "The Vector after popping : ";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    v.clear();

    cout << "The Vector after clearing : " << endl;

    cout << "The capacity of Vector : " << v.capacity() << endl;
    cout << "The size of Vector : " << v.size() << endl;

    return 0;
}