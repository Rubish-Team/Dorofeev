//Даны два целых числа.
//Программа должна вывести единицу, если первое число больше второго, двойку,
//если второе больше первого, или ноль, если они равны.
#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cin >> num1 >> num2;

    if (num1 > num2) {
      cout << "1";
    }

    else if (num1 < num2) {
      cout << "2";
    }

    else {
      cout << "3";
    }

  return 0;
}
