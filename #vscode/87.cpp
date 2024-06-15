#include <iostream>
using namespace std;

int main()
{
    bool isPrime[100][100] = {0};
    int n, m, val;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> val;
            if (val <= 1)
            {
                continue;
            }
            isPrime[i][j] = 1;
            for (int k = 2; k < val / 2; k++)
            {
                if (val % k == 0)
                {
                    isPrime[i][j] = 0;
                    break;
                }
            }
        }
    }

    int q, si, sj, rs, cls;
    cin >> q;

    while (q--)
    {
        int cnt = 0;
        cin >> si >> sj >> rs >> cls;

        for (int i = si; i < si + rs; i++)
            for (int j = sj; j < cls + sj; j++)
            {
                cnt += isPrime[i][j];
            }

        cout << cnt << "\n";
    }
    return 0;
}