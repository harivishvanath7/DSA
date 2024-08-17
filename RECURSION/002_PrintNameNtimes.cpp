#include <bits/stdc++.h>
using namespace std;

void printName(int n, int count){

    if(count == n) return;

    cout << "Hari Vishvanath" << endl;
    count++;
    printName(n, count);
}

int main(){
    int n;
    cout << "Enter the No. of times to Print Your Name : ";
    cin >> n;

    printName(n, 0);

    return 0;
}