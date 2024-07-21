#include <iostream>
using namespace std;

// Define the print function
void print(int n, int count = 1) {
    // Base case: stop recursion when count reaches n
    if (count >= n+1) return;

    // Print the current count
    cout << count << endl;

    // Recursive call with incremented count
    print(n, count + 1);
}

int main() {
    int n;
    cout << "Enter the No. of times to print: ";
    cin >> n;

    // Call the print function with the user-provided number
    print(n);

    return 0;
}
