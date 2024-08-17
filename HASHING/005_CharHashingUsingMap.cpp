#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the String: ";
    cin >> s;

    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {
        char c;
        cin >> c;

        // fetch
        cout << "The character '" << c << "' occurs " << freq[c] << " times." << endl;
    }

    return 0;
}
