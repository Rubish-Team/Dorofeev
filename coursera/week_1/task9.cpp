// На вход дано целое положительное число N. Выведите его в двоичной системе счисления без ведущих нулей.
//
// Пример
//
// stdin	stdout
// 5	101
// 32	100000
// 1	1
// Подсказка
// число N можно считывать в переменную типа int
// алгоритм перевода из десятичной системы счисления в двоичную, может быть найден, например, здесь: https://www.yaklass.ru/p/informatika/10-klass/informatciia-i-informatcionnye-protcessy-11955/predstavlenie-chislovoi-informatcii-v-kompiutere-11901/re-62e8903e-ba93-478a-85b5-ae45af40c658
// в этой задаче вам может пригодиться контейнер vector; напоминаем, что добавление значения x в конец вектора v делается так: v.push_back(x);


#include <iostream>
#include <vector>
using namespace std;

int main () {
  int n, k;
  int l = 0;
  int i = 0;
  cin >> n;

  vector<int> a;

  for (int i = 0; i < n; ++i) {
  while (n) {
    k = n % 2;
    n = n / 2;
    a.push_back(k);
    l += 1;
    }
  }

  for (int e = l - 1; e >= 0; e-- ) {
    cout << a[e];
  }


  return 0;
}
