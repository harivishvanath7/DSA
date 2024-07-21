#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;

    int hash[26] = {0};
    // pre-computing
    for (int i = 0; i < count; i++)
    {
        hash[s[i]] += 1;
    }
    
    // fetching
    int q;
    cout << "Enter the no. of queries : ";
    cin >> q;

    while(q--){
        char ch;
        cin >> ch;

        cout << "The character " << ch << " appears " << hash[ch] << " times.";
    }

    return 0;
}