//Дано положительное действительное число X. Выведите его дробную часть.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double num1;

  cin >> num1;
  int x = num1;

  cout << (num1 - x);

  return 0;
}
