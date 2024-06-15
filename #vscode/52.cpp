// replace max min
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    bool pal = 1;

    // inserting
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    // process

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            pal = 0;
            break;
        }
    }
    if (pal)
        cout << "YES";
    else
        cout << "NO";
}
