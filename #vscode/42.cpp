#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        int x = i;
        int sum = 0;
        while (x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        if (sum >= a && sum <= b)
        {
            cout << i << ",";
        }
    }
}
