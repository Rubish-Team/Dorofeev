//Даны три целых числа. Определите, сколько среди них совпадающих.
//Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает)
//или 0 (если все числа различны).

#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num1 == num3 && num2 == num3) {
      cout << "3";
    }

    else if (num1 == num2 || num2 == num3 || num1 == num3) {
      cout << "2";
    }

    else {
      cout << "0";
    }

    return 0;
}
