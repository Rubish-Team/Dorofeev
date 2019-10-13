//Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.
#include <iostream>

using namespace std;

int main(){
  int num1, num2;

  cin >> num1 >> num2;

  if (num1 > num2){
      cout << num1;
  }
    else if (num1 < num2){
        cout << num2;
    }
  else {
    cout << num1;
  }

  return 0;
}
