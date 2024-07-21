#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, count=0;
    cout << "Enter the size of the string : ";
    cin >> n;

    char str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for (int j = 0; j < n; j++)
    {
        if(str[j] == str[n-j-1]) count++;
    }

    if(count == n) cout << "Palindrome";
    
    else cout << "Not Palindrome";
    
    
}