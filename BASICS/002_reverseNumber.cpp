#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout << "Enter The Number : ";
    cin >> num;

    int digit, rev=0;

    while(num != 0){
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    cout << "The Reverse Number is : " << rev;

    return 0;
}