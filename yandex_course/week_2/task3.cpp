//Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число).
//Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.

#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;

  cin >> num1 >> num2 >> num3;

  if (num1 > num2 && num1 > num3) {
    cout << num1;
  }

  else if (num1 < num2 && num2 > num3) {
    cout << num2;
  }

  else {
    cout << num3;
  }

  return 0;
}
