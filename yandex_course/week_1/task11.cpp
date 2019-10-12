#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c;
    a = a * 3600;
    b = b * 60;
    g = a + b + c;

    cin >> d >> e >> f;
    d = d * 3600;
    e = e * 60;
    h = d + e + f;

    cout << h - g << endl;
    return 0;
 }
