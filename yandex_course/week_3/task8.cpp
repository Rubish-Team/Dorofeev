//Последовательность состоит из натуральных чисел и завершается числом 0.
//Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.

#include <iostream>

using namespace std;

int main () {
  int num1, num2;
  num1 = 0;
  int num3 = 0;
  while (cin >> num2 && num2 != 0) {

    if (num1 < num2) {
    num3 = 1;
    num1 = num2;
    }

    else if (num1 == num2) {
      ++num3;
    }

} // while end

  cout << num3;
  return 0;

}
