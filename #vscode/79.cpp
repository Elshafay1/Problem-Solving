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

    int mr = 0, mc = 0;
    for (int i = (r - 1); i >= 0; i--)
    {
        for (int j = (c - 1); j >= 0; j--)
        {
            if (arr[i][j] > arr[mr][mc])
                mr = i, mc = j;
        }
    }

    cout << "max value at position " << mr << " " << mc << " with value = " << arr[mr][mc];
} 
