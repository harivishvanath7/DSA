#include <bits/stdc++.h>
using namespace std;

void print1toN(int n, int c){

    if(c == n+1) return;

    cout << c << " ";

    c++;
    print1toN(n, c);
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    print1toN(n, 1);

    return 0;
}