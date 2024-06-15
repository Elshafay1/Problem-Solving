// replace max min
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];

    // inserting
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    // process
    int maxn = arr[0],
        minn = arr[0];
    for (int i = 0; i < n; i++)
    { // get max
        if (maxn < arr[i])
        {
            maxn = arr[i];
        }
        // get min
        if (minn > arr[i])
        {
            minn = arr[i];
        }
    }

    // swaping min and max
    int temp = minn;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minn)
        {
            arr[i] = maxn;
        }
        else if (arr[i] == maxn)
            arr[i] = temp;

        cout << arr[i] << ",";
    }
    // cout << minn << " " << maxn;
}
