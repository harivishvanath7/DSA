#include <bits/stdc++.h>
using namespace std;

int main(){

    multiset<int> ms;  // sorted but not duplicate

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // deletes all the 1's

    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

}