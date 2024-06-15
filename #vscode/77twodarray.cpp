#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    for (int r = 0; r < 2; r++)
    {
        cout << "ROW " << r << ": ";
        for (int c = 0; c < 3; c++)
        {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
}
