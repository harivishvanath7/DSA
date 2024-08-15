#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "123";
    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    return 0;
}

// Produces all the permutations

/*
eg:-
    123
    132
    213
    231
    312
    321
*/