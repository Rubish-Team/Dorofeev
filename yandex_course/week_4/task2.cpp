
//Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num;

    cin >> num;

    double frac = num - static_cast<int> (num);

    cout << static_cast<int> (frac * 10);

    return 0;
}
