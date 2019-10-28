// #include <iostream>
// #include <cmath>
// using namespace std;
//
// int main() {
//   double a, b, c, x1, x2, k;
//   cin >> a >> b >> c;
//   k = sqrt((b * b) - (4 * a * c));
//   x1 = ((-b + k) / (2 * a)) ;
//   x2 = ((-b - k) / (2 * a));
//
//   if (x1 == x2 && k >= 0 && a != 0) {
//     cout << ((-b + k) / (2 * a)) ;;
//   } else if (x1 != x2 && k >= 0 && a != 0){
//     cout << ((-b + k) / (2 * a)) << " " << ((-b - k) / (2 * a));
//   } else if (k < 0 || b == 0 || c == 0) {
//     cout << "";
//   } else if (a == 0) {
//     cout << ((-1) * (c / b));
//   }
//
//   return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  // найдём дискриминант
  double D = B * B - 4 * A * C;

  // если A равно нулю, то уравнение линейное: Bx + C = 0
  if (A == 0) {

    // Bx = -C => x = -C / B
    if (B != 0) {
      cout << -C / B << endl;
    }
    // если B равно нулю, корней нет

  } else if (D == 0) {  // случай с нулевым дискриминантом

    // корень ровно один
    cout << -B / (2 * A) << endl;

  } else if (D > 0) {  // в случае с положительным дискриминантом корня два

    double r1 = (-B + sqrt(D)) / (2 * A);
    double r2 = (-B - sqrt(D)) / (2 * A);

    cout << r1 << " " << r2 << endl;

  }
  // если дискриминант отрицателен, действительных корней нет

  return 0;
}
