#include <bits/stdc++.h>
using namespace std;

int main(){

    char grade;

    cout << "Enter the grade (in caps) : ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent";
        break;

    case 'B':
        cout << "Good";
        break;

    case 'C':
        cout << "Improve";
        break;

    case 'D':
        cout << "Work Hard";
        break;

    case 'F':
        cout << "Critical";
        break;

    default:
        cout << "Invalid";
        break;
    }

    return 0;
}