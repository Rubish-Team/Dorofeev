// Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
// Формат входных данных
//
// В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
// Формат выходных данных
// Выведите ответ на задачу.
// Sample Input:
//
// 5
// 1 5 2 4 3
// Sample Output:
//
// 5 4

#include <iostream>
#include <vector>

using namespace std;

int main(){
  int a, n;

  cin >> n;
  vector <int> st;

  //ввод массива
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    st.push_back(temp);
  }

  //обработка и вывод
  for (int i = 1; i < n; i++) {
    if (st[i - 1] < st[i]) {
      cout << st[i] << " ";
    }

  }


  return 0;
}
