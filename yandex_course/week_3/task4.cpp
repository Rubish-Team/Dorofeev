/**Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки,
или слово NO в противном случае.**/

#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;
  num2 = 1;
  num2 = num2 * num2;

  cin >> num1;

  while (num2 <= 1000000) {
    num2 += num2;
}

  if (num2 % num1 == 0) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }

  return 0;
}
