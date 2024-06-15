#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        cout << "row:" << i << "\t";
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int leftdiag = 0, rightdiag = 0, lastRow = 0, lastcolumn = 0;

    {
        int i = 0, j = 0;
        while (i < r && j < c)
        {
            leftdiag = leftdiag + arr[i][j];
            i++;
            j++;
        }
        cout << leftdiag << " ";
    }

    {
        int i = 0, j = c - 1;
        while (i < r && j >= 0)
        {
            rightdiag = rightdiag + arr[i][j];
            i++;
            j--;
        }
        cout << rightdiag << "\n";
    }

    {
        int i = r - 1, j = 0;
        while (j < c)
        {
            lastRow = lastRow + arr[i][j];
            j++;
        }
        cout << lastRow << " ";
    }

    {
        int i = 0, j = c - 1;
        while (i < r)
        {
            lastcolumn = lastcolumn + arr[i][j];
            i++;
        }
        cout << lastcolumn << " ";
    }
}
