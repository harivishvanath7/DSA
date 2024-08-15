#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(); {2, 4};

    // internally, vector -> singly linked list & list -> doubly linked list
    // insert in vector costly
    // rest all functions are same as vector
}