#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cout << "Enter the No. of Rows : ";
    cin >> n;

    // Left Increasing Triangle

    for (int i = 0; i < n; i++)                         // Concept : [ j <= i ]
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


/*
Sample Output :

Enter the No. of Rows : 5

    *
    * *
    * * *
    * * * *
    * * * * *

*/