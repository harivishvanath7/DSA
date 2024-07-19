#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int temp = n;
    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    cout << "The Digits in " << temp << " is " << count;

    return 0; 
    
}