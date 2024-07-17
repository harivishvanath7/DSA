#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the no of rows : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        // Loop to print spaces before stars
        for(int j = 0; j < i; j++) {
            cout << "  ";  // Two spaces
        }
        // Loop to print stars in each row
        for(int k = i; k < n; k++) {
            cout << "* ";
        }
        // Move to the next line after printing all stars in a row
        cout << endl;
    }
    
    return 0;
}

/*

ex:- Enter the no of rows : 4

* * * *
  * * * 
    * *
      * 
      
*/