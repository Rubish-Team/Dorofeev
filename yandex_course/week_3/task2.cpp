//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.

#include <iostream>

using namespace std;

int main() {
  int num1, num2;
  num2 = 2;
  cin >> num1;

/**  while (num2 <= num1) {
    if (num2 % num1 == 1) {
      cout << num2;
    }
    else {
      num2 +=1;
    }
**/

/** while (num1 % num2 != 0) {
    ++num2;
}

cout << num2;


  return 0;
}
