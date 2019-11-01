// Дана строка. Найдите в этой строке второе вхождение буквы f и выведите индекс этого вхождения. Если буква f в данной строке встречается только один раз, выведите число -1, а если не встречается ни разу, выведите число -2. Индексы нумеруются с нуля.
//
// Пример
// stdin	stdout
// comfort	-1
// coffee	3
// car	-2

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
  int k = 0;
  string a, b;
  cin >> a;

  for (int i = 0; i < a.size(); ++i) {
    if (a[i] == 'f') {
    k += 1;
    }
    if (k == 2) {
      cout << i;
      break;
  }

}
  if (k == 1) {
    cout << "-1";
  } else if (k == 0) {
    cout << "-2";
  }


  return 0;
}
