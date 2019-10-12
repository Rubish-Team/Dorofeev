#include <iostream>

using namespace std;

int table_count(int st);

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    cout << table_count(a) + table_count(b) + table_count(c) << endl;

    return 0;
}

int table_count(int st) {
    static const int p_t = 2;

    return (st + p_t - 1) / 2;
}
