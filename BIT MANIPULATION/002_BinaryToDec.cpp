#include <bits/stdc++.h>
using namespace std;

int binaryToDec(string s){
    int len = s.length();

    int num = 0, pow2 = 1;

    for (int i = len-1; i >= 0; i--)
    {
        if(s[i] == '1') num = num + pow2;
        pow2 = pow2 * 2;
    }
    return num;
    
}
int main(){
    string s;
    cout << "Enter the binary : ";
    cin >> s;

    int dec = binaryToDec(s);

    cout << "The Decimal : " << dec;

    return 0;
}