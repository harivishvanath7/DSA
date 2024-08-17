#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout << "Enter the String : ";
    cin >> s;

    // int hash[26] = {0};

    int hash[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        // hash[s[i] - 'a']++;
        hash[s[i]]++;

    }

    int q;
    cout << "enter the No of queries : ";
    cin >> q;

    while(q--){
        char c;
        cin >> c;

        // cout << "The Character " << c << " occurs " << hash[c-'a'] << " times." << endl;
        cout << "The Character " << c << " occurs " << hash[c] << " times." << endl;
    }
    return 0;
}