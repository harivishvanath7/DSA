#include <iostream>
#include <bitset>

using namespace std;

void showBitwiseOperations(int a, int b) {
    cout << "Bitwise Operations on " << a << " (" << bitset<8>(a) << ") and " << b << " (" << bitset<8>(b) << "):\n";
    
    // AND
    cout << "AND: " << (a & b) << " (" << bitset<8>(a & b) << ")\n";
    
    // OR
    cout << "OR: " << (a | b) << " (" << bitset<8>(a | b) << ")\n";
    
    // XOR
    cout << "XOR: " << (a ^ b) << " (" << bitset<8>(a ^ b) << ")\n";
    
    // NOT
    cout << "NOT a: " << (~a) << " (" << bitset<8>(~a) << ")\n";
    cout << "NOT b: " << (~b) << " (" << bitset<8>(~b) << ")\n";
    
    // Left Shift
    cout << "a << 1: " << (a << 1) << " (" << bitset<8>(a << 1) << ")\n";
    cout << "b << 1: " << (b << 1) << " (" << bitset<8>(b << 1) << ")\n";
    
    // Right Shift
    cout << "a >> 1: " << (a >> 1) << " (" << bitset<8>(a >> 1) << ")\n";
    cout << "b >> 1: " << (b >> 1) << " (" << bitset<8>(b >> 1) << ")\n";
}

string onesComplement(int n) {
    return bitset<8>(~n).to_string();
}

string twosComplement(int n) {
    return bitset<8>(~n + 1).to_string();
}

int main() {
    int a = 5;  // Binary: 00000101
    int b = 3;  // Binary: 00000011

    showBitwiseOperations(a, b);

    // 1's Complement
    cout << "\n1's Complement of " << a << " (" << bitset<8>(a) << "): " << onesComplement(a) << "\n";
    cout << "1's Complement of " << b << " (" << bitset<8>(b) << "): " << onesComplement(b) << "\n";

    // 2's Complement
    cout << "2's Complement of " << a << " (" << bitset<8>(a) << "): " << twosComplement(a) << "\n";
    cout << "2's Complement of " << b << " (" << bitset<8>(b) << "): " << twosComplement(b) << "\n";

    return 0;
}
