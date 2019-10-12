*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n_sec;
    int h, m, s;

    cin >> n_sec;

    s = n_sec % 60;
    m = n_sec / 60 % 60;
    h = n_sec / 3600 % 24;

    cout << h << ':' << setfill('0') << setw(2) << m << ':' << setfill('0') << setw(2) << s << endl;

    return 0;
}
