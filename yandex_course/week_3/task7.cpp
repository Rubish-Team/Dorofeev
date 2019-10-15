//Последовательность состоит из натуральных чисел и завершается числом 0.
//Определите значение наибольшего элемента последовательности.

#include <iostream>

using namespace std;

int main () {
  int num1, num2;
  num1 = -1;

  while (cin >> num2 && num2 != 0) {
    if (num1 < num2) {
      num1 = num2;
    }
  }
  cout << num1;

  return 0;
}
