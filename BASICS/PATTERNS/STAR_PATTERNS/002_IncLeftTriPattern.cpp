#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the no of rows : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)            // Concept : - [ j <= i ]
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*

ex:- Enter the no of rows : 4

*
* *
* * *
* * * *

*/