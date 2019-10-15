#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int p, x, y;

    cin >> p >> x >> y;

    // Option 1
    double rate = p / 100.0;

    double coins = x * 100 + y;

    int k_dep = coins + coins * rate;

    cout << k_dep / 100 << ' ' << k_dep % 100;

    // Option 2
    double money = x + y / 100.0;
    double after_year = money + money * p / 100;

    after_year *= 100;

    int rub = trunc(after_year) / 100;
    int kop = static_cast<int> (trunc(after_year)) % 100;

    cout << rub << ' ' << kop;

    return 0;
}
