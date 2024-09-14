#include <bits/stdc++.h>
using namespace std;

vector<int> printRow(int n){
    for (int i = 0; i < n; i++)
    {
        
    }
    
}

void pascalTriangle(int n){
    for (int i = 0; i < n; i++){
        printRow(i);
    }
    
}

int main(){
    int n;
    cout << "Enter the no of Rows : ";
    cin >> n;

    pascalTriangle(n);

    return 0;
}