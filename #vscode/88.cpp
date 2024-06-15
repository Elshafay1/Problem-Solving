#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[100][100];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];

    int di[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dj[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            int val = arr[i][j];
            bool valismount = 1;
            for (int k = 0; k < 8; k++)
            {
                int ni = i + di[k];
                int nj = j + dj[k];

                if (ni < 0 || ni >= n || nj < 0 || nj >= m)
                {
                    continue;
                }

                if (val <= arr[ni][nj])
                {
                    valismount = 0;
                    break;
                }
            }

            if (valismount)
            {
                cout << i << " " << j << "\n";
            }
        }
}