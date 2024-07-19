#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int temp = num;

    int dig, sum;

    while (num != 0)
    {
        dig = num % 10;
        sum = (sum * 10) + dig;
        num = num / 10;
    }

    if(sum == temp){
        cout << temp << " is a Palindrome.";
    }
    else{
        cout << temp << " is not a Palindrome.";
    }

    return 0;
}