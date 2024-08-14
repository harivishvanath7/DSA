#include <bits/stdc++.h>
using namespace std;

void tri(int n){
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
    
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
    cout << endl;    
    }
}

void invTri(int n){
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2*n - (2*i+1); j++)
        {
            cout << "*";
        }
    
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
    cout << endl;    
    }
}


int main(){
    int n; 
    cin >> n;

    tri(n);
    invTri(n);
   
   return 0;
}