#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    
    cout << "Enter the Number : ";
    cin >> num;

    int count = 0;

    while(num != 0){
        num = num / 10;
        count = count + 1;
    }

    cout << "The Count of the Number : " << count;

    return 0;
}


/* Other ways

1.) Use Logarithm base 10
        int digits = floor(log10(n) + 1);
        return digits;

2.) Convert to String and then find length
        string x = to_string(n);
        return x.length();
        
*/