//По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.

#include <iostream>

using namespace std;

int main () {
  int num1, num2, num3;

  num2 = 1;
  num2 = num2 * num2;

  cin >> num1;

  while (num2 <= num1) {
    cout << num2 << " ";
    num2 += num2;

  }

/**
if (num1 % num2 == 0) {
  cout << num2 << " ";
  ++num2;
}

else {
cout << num2 << " ";
++num2;
}
**/

  return 0;
}
