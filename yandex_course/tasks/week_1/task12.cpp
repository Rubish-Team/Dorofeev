#include <iostream>

using namespace std;

int main() {
    int v, t;
    const int s = 109;

    cin >> v >> t;

    int stop = v * t % s;
    stop = (s + stop) % s;

    cout << stop << endl;

    return 0;
}
