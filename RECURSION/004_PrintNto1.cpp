#include <bits/stdc++.h>
using namespace std;

void printNto1(int n, int c){
    if(c>n) return;

    printNto1(n, c);

    cout << c << " ";
    c--;
}

// Other Approach (by unwinding..)

/*
    void func(int i, int n){
    
    // Base Condition.
    if(i>n) return;
    
    // Function call to print (i+1) integers.
    func(i+1,n);
    cout<<i<<endl;

    }
*/

int main(){
    int n;
    cout << "Enter the value of N : ";
    cin >> n;

    printNto1(n, n);

    return 0;
}