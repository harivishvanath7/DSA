#include <bits/stdc++.h>
using namespace std;

void myFunction(string country = "Norway") { // Parameters
    cout << country << "\n";
}

int main() {
    myFunction("Sweden");  // Passes "Sweden" by value         // Arguments
    myFunction("India");   // Passes "India" by value
    myFunction();          // Uses the default argument "Norway"
    myFunction("USA");     // Passes "USA" by value
    return 0;
}
