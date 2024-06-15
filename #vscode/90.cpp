#include <iostream>
using namespace std;

int main()
{
    int n, m, k,
        r = 0,
        c = 0;
    cin >> n >> m >> k;

    int rd[4] = {-1, 0, 1, 0};
    int cd[4] = {0, 1, 0, -1};

    while (k--)
    {
        int direction, steps;
        cin >> direction >> steps;
        direction--;

        r = (r + rd[direction] * steps) % n;
        c = (c + cd[direction] * steps) % m;

        if (r < 0)
            r = n + r;
        if (c < 0)
            c = m + c;

        cout << r << " " << c << "\n";
    }
    return 0;
}