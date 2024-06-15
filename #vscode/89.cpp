//failed mission
#include <iostream>
using namespace std;

int main()
{

    int row, column,
        i = 0,
        j = 3;
    cin >> row >> column;
    int arr[row][column];

    //              up, r, d, l
    // int di[4] = {-1, 0, 1, 0};
    // int dj[4] = {0, 1, 0, -1};

    int k;
    cin >> k;
    while (k--)
    {
        int direction, steps;
        cin >> direction >> steps;
        if (direction == 1)
        {
            int ni = i + -1 * steps;
            if (steps > row)
                i = row * (steps / row) + ni;
            else if (steps > i)
                i = row + ni;
            else
                i = ni;
        }
        else if (direction == 2)
        {
            int nj = j + 1 * steps;
            if (steps > column)
                j = column * (steps / column) - nj;
                //steps<7
            else if (steps > column - j - 1)
                j = steps - (column - j) ;
            else
                j = nj;
        }

        cout << i << " " << j << "\n";
    }
}