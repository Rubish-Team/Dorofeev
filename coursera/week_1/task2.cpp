#include <iostream>
#include <string>

using namespace std;

int main () {
  string a, b, c;
  cin >> a >> b >> c;

  if (a <= b && a <= c) {
    cout << a;
  } else if (b <= a && b <= c) {
    cout << b;
  } else {
    cout << c;
  }
  // if (a < b && a < c) {
  //   cout << a;
  // } else if (b < a && b < c) {
  //   cout << b;
  // } else if (c < a && c < b) {
  //   cout << c;
  // } else if (c == a && c == b && a == b) {
  //   cout << c;
  // } else if (c < a && (a == b) ) {
  //   cout << c;
  // } else if (b < a && (a == c)) {
  //   cout << b;
  // } else if (a < b && (b == c)) {
  //   cout << a;
  // } else if (c > a && (a == b) ) {
  //   cout << a;
  // } else if (b > a && (a == c)) {
  //   cout << a;
  // } else if (a > b && (b == c)) {
  //   cout << b;
  // }
  return 0;
}
