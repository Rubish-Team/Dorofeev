//Выведите все четные элементы массива.


#include <iostream>
#include <vector>

using namespace std;

int main () {
  int n = 0;
  cin >> n;

  vector <int> a(n);

  //считывание
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  //обработка и вывод
  for (int i = 0; i < n; i++) {
    if ((a[i] % 2) == 0) {
      cout << a[i] << " ";
    }
  }
  return 0;
}
