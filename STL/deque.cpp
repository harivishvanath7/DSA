#include <bits/stdc++.h>
using namespace std;

int main(){

    deque <int> d;

    d.push_back(1);
    d.push_back(2);

    for(int i:d){
        cout << i << " ";
    } cout << endl;
    
    d.push_back(3);
    d.push_back(4);
    
    for(int i:d){
        cout << i << " ";
    } cout << endl;
    
    d.push_front(2);

    for(int i:d){
        cout << i << " ";
    } cout << endl;

    d.pop_back();

    for(int i:d){
        cout << i << " ";
    } cout << endl;

    d.pop_front();

    for(int i:d){
        cout << i << " ";
    } cout << endl;

    cout << "Before Erasing : " << d.size() << endl;
    for(int i:d){
        cout << i << " ";
    } cout << endl;

    d.erase(d.begin(), d.begin()+1);
    
    cout << "After Erasing : " << d.size() << endl;
    for(int i:d){
        cout << i << " ";
    } cout << endl;
    

    return 0;

}