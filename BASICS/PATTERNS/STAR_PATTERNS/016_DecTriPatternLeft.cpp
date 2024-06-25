#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cout << "Enter the No. of Rows : ";
    cin >> n;

    // Left Decreasing Triangle

    for (int i = 0; i < n; i++)                         // Concept : [ j = i , j < n ]
    {
        for (int j = i; j < n; j++)
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

    * * * * *
    * * * *
    * * *
    * *
    *

*/