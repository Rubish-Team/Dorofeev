//Вводится последовательность целых чисел, оканчивающаяся числом 0
//(само число 0 в последовательность не входит, а служит как признак ее окончания.

#include <iostream>

using namespace std;

int main () {
  int num1, num2;
  num1 = 0;

  while (cin >> num2 && num2 != 0) {
    num1 += num2;

  }
  cout << num1;
  return 0;
}
