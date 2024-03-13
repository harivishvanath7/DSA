#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    cout << "Lower Bound : " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper Bound : " << upper_bound(v.begin(), v.end(), 6) - v.begin()  << endl;

    int a = 3;
    int b = 5;

    cout << "Max : " << max(a,b) << endl;
    cout << "Min : " << min(a,b) << endl;
    
    cout << "The value of a : " << a << endl;
    swap(a,b);

    cout << "After Swapping : " << endl;
    cout << "The value of a : " << a << endl;

    string st = "abcd";
    cout << "Original String : " << st << endl;
    
    reverse(st.begin(), st.end());
    cout << "Reversed String : " << st << endl;

}