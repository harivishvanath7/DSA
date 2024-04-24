#include <bits/stdc++.h>
using namespace std;


int main(){

    int n, count;
    cout << "Enter The Number : ";
    cin >> n;

    while (n!=0)
    {
        n = n / 10;
        count ++;
    }

    cout << "Count : " << count;

    return 0;
    
}