//ana mtkayf now mn kotr al 3azama

#include <iostream>
using namespace std;

int main()
{
    int depth, row, column, to;

    cin >> depth >> row >> column >> to;

    if (to == 1)
    {
        int d, r, c;
        cin >> d >> r >> c;
        int oneD = (d * row * column) + ((r * column) + c);
        cout << oneD << "\n";
    }
    if (to == 2)
    {
        int pos, d, r, c;
        cin >> pos;
        d = pos / (row * column);

        int idx = pos - (d * row * column);

        r = idx / column;
        c = idx % column;

        cout << d << " " << r << " " << c << "\n";
    }
}