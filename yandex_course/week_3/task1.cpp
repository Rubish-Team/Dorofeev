//По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N,
//в порядке возрастания.


#include <iostream>

using namespace std;

int main() {
  int n, m, sq;
  m = 1;
  sq = 1;
  cin >> n;

  while (sq <= n) {
    cout << sq << " ";
    m += 1;
    sq = m * m;
  }

  return 0;
}
