#include <bits/stdc++.h>
using namespace std;

string decToBinary(int n){
    
    if (n == 0) return "0"; 
    string res = "";

    while (n > 0) {
        if (n % 2 == 1) res = '1' + res;
        else res = '0' + res;
        n = n / 2;
    }

    return res;

}

int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    string binary = decToBinary(n);

    cout << "The binary is : " << binary;
    
    return 0;
}