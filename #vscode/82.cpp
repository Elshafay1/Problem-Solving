#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int i = 0, j = 0;
    while (i < r && j < c)
    {
        sum += arr[i][j];
        // Initialize right
        int maxi = i, maxj = j + 1;

        // bottom
        if (arr[i + 1][j] > arr[maxi][maxj])
        {
            maxi = i + 1, maxj = j;
        }
        // diagonal
        if (arr[i + 1][j + 1] > arr[maxi][maxj])
        {
            maxi = i + 1, maxj = j + 1;
        }
        // assign i,j
        i = maxi, j = maxj;
    }

    cout << sum;
}
