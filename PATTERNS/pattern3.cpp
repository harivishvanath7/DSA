#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the Size : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
    
}

/*
        1
        1 2
        1 2 3
        1 2 3 4
*/