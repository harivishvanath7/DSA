#include <iostream>
using namespace std;

int main() {
 
    int n ;
    cout << "Enter a Number : ";
    cin >> n ;

    int rem ;

    int even = 0 ;
    int odd = 0 ;

    while(n > 0){
        rem = n % 10 ;
        if(rem % 2 == 0){
            even = even + rem ;
        } 
		else {
          odd = odd + rem;
        }
        n = n / 10;
    }
    
    cout << "Sum of even numbers: " << even << endl;
    cout << "Sum of odd numbers: " << odd << endl;

    return 0;
}


