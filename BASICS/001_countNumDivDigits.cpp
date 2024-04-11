#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    
    cout << "Enter the Number : ";
    cin >> num;

    int count = 0;
    int n = num;

    while(num != 0){
        int digit = num % 10;
        if(digit != 0 && n % digit == 0){
            count++;
        }
        num = num / 10;
    }

    cout << "The Count of the digits which exactly divide the Number : " << count;

    return 0;
}
