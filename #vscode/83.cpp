#include <iostream>
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

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int f, s;
        cin >> f >> s;
        f--;
        s--;

        bool bol = true;
        for (int j = 0; j < c; j++)
        {
            if (arr[f][j] >= arr[s][j])
            {

                bol = false;
                break;
            }
        }

        if (bol)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}
