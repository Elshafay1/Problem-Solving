//Need more work not solved
#include <iostream>

using namespace std;

int main()
{
    int arr[100][100] = {0};
    int row, column;
    cin >> row >> column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    int q;
    cin >> q;

    for (int w = 0; w < q; w++)
    {
        int i, j, r, c;
        cin >> i >> j >> r >> c;
        int numPrime = r*c;

        for (int e = 0; e < r; e++)
        {
            for (int y = 0; y < c; y++)
            {
                int val = arr[e][y];

                for (int t = 2; t < val / 2; t++)
                {
                    if (val % t == 0)
                    {
                        numPrime--;
                        break;
                    }
                }
            }
        }
        cout << numPrime;
    }
}

/*

3 4
8 2 9 5
3 2 27 6
7 8 29 22
2
1 0 2 2
0 1 2 3

*/
