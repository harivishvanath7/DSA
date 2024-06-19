#include <bits/stdc++.h>
using namespace std;

void swapNum(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << " " << secondNum << "\n";

  swapNum(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << " " << secondNum << "\n";

  return 0;
}