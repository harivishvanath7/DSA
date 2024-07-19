#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << "The divisors are : ";

    /* 
    Big-O(n):
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    } 
    */

   // Big-O(sqrt(n))

   for (int i = 1; i*i <= n; i++)
   {
        if(n%i==0){
            cout << i << " ";
        }
        if(n/i != i){ 
            cout << n/i << " ";
        }
   } // Sort output if neccessary
      
    return 0;
}