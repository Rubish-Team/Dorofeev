#include <iostream>
using namespace std;

int main() {
  int x = 3;
  int y = 1;
  if ((x - y) * (x + y) > 10) {
    cout << "More than 10";
  } else {
    cout << "Less than 10";
  }
  return 0;
}
