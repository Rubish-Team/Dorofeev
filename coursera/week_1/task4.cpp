#include <iostream>
using namespace std;

int main () {
  int num1, num2;
  cin >> num1 >> num2;

  if (num2 == 0 || num1 == 0) {
    cout << "Impossible" << endl;
  } else {
    cout << num1 / num2 << endl;
  }




  return 0;
}
