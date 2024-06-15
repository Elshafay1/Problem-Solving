
#include <iostream>
using namespace std;

int main()
{

    int x, a, b, c, d, e, r = 0;
    cin >> x >> a >> b >> c >> d >> e;

    r += (a <= x);
    r += (b <= x);
    r += (c <= x);
    r += (d <= x);
    r += (e <= x);

    cout << r << " " << 5 - r;

    // int  gx = 0, sx = 0;
    // if (a <= x)
    // {
    //     sx++;
    // }
    // else
    // {
    //     gx++;
    // }

    // if (b <= x)
    // {
    //     sx++;
    // }
    // else
    // {
    //     gx++;
    // }

    // if (c <= x)
    // {
    //     sx++;
    // }
    // else
    // {
    //     gx++;
    // }

    // if (d <= x)
    // {
    //     sx++;
    // }
    // else
    // {
    //     gx++;
    // }

    // if (e <= x)
    // {
    //     sx++;
    // }
    // else
    // {
    //     gx++;
    // }

    // cout << sx << " " << gx;
}
