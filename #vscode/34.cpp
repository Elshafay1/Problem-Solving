#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, w, cnt = 0;
    cin >> n >> m >> w;

    for (int a = 1; a <= n; a++)
        for (int b = a; b <= m; b++)
            for (int c = 1; c <= w; c++)
                if (a + b <= c)
                    cnt++;

    cout << cnt << "\n";
}
