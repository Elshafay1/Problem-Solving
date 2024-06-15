#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            if (c == r || r + c == n+1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}
