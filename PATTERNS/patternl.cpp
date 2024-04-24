#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int k = 0; k < n-i; k++)
        {
            cout << "  ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout << " *";
        }

        cout << endl;

    }
    return 0;

    
}

