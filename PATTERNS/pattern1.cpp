#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Getting No.of Rows
    int n;
    cin >> n;

// In "while" loop

    int i = 1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout << "*";
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

// In "for" loop

    for(int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}










