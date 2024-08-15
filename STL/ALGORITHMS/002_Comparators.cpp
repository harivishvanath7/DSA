#include <bits/stdc++.h>
using namespace std;

// Custom comparator function
bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    // the else condition is both are true...
    // then compare first for descending order
    if(p1.first > p2.first) return true;
    return false;
}

int main(){
     pair<int, int> a[] = {{1,2}, {2,1}, {4,1}}; 
    /*
        Sort it according to second element , 
        if second element is same, 
        then sort it according to first element 
        but in descending order...
    */
    sort(a, a+n, comp); // comp = custom comparator function
}