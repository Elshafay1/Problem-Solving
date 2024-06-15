#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int x;
    // inserting
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    // process

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        bool not_found = 1;
        // searching for one val
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == x)
            {
                not_found = 0;
                cout << i << endl;
                break;
            }
        }

        if (not_found)
            cout << -1 << endl;
    }
}
