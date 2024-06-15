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

    int swap1, swap2, temp;
    cin >> swap1 >> swap2;

    for (int i = 0; i < r; i++)
    {
        temp = arr[i][swap1];
        arr[i][swap1] = arr[i][swap2];
        arr[i][swap2] = temp;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
