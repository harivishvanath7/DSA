#include <bits/stdc++.h>
using namespace std;

// Function Declaration
void myFunction(string lname){
    // Function Definition
    cout << "Full name :" << "Hari " << lname;
}

int main(){

    string name;

    cout << "Enter your Last Name : ";
    cin >> name;

    myFunction(name); // Function Call

    return 0;
}