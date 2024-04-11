#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout << "Enter A Number : ";
    cin >> num;

    int rev = 0, digit;
    
    int n = num;

    while(num != 0){
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }

    if(n == rev){
        cout << "The Number " << n << " is a Palindrome Number.";
    }
    else{
        cout << "The Number " << n << " is not a Palindrome Number.";
    }

    return 0;
}