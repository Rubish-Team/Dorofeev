//Даны три натуральных числа A, B, C.
//Определите, существует ли треугольник с такими сторонами.
//Если треугольник существует, выведите строку YES, иначе выведите строку NO.
//Треугольник — это три точки, не лежащие на одной прямой.

#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;

  cin >> num1 >> num2 >> num3;

  if ((num1 + num2) > num3 && (num2 + num3) > num1 && (num3 + num1) > num2) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }

  return 0;
}
