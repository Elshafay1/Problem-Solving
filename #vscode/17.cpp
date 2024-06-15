#include <iostream>
using namespace std;

int main()
{
    int x, a1, a2, b1, b2, c1, c2, f = 0;
    cin >> x >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    if (a1 < x && x < a2)
        f++;
    if (b1 < x && x < b2)
        f++;
    if (c1 < x && x < c2)
        f++;

    cout << f;
}
