#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    // inserting
    int freqarr[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
        freqarr[arr[i]]++;
    }

    // process

    // int freqarr[n + 1] = {0};

    // for (int i = 0; i < n; i++)
    // {
    //     freqarr[arr[i]]++;
    // }

    // int maxfreq = freqarr[0],
    //     maxPos = -1;
    // for (int i = 0; i < n + 1; i++)
    // {
    //     if (maxfreq < freqarr[i])
    //     {
    //         maxfreq = freqarr[i];
    //         maxPos = i;
    //     }
    // }

    int maxPos = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (freqarr[maxPos] < freqarr[i])
        {
            maxPos = i;
        }
    }

    cout << maxPos << "  repeated  " << freqarr[maxPos];
}
