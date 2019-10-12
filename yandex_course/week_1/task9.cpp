#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p = (a * 100 + b) * c;
    int k = (a * 100 + b) * c;

    cout << p / 100 << " " << k % 100 << endl;
    return 0;
 }
