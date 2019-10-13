#include <iostream>

using namespace std;

int main() {
    int n, m, k;

    cin >> n >> m >> k;

    int square = n * m;
    bool enough = k <= square;
    int rem = square - k;

    if (enough && (rem % n == 0 || rem % m == 0)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
