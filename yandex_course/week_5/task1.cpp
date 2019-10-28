//Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).


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
  for (int i = 0; i < n; i += 2 ) {
    cout << a[i] << " ";
  }
  return 0;
}
