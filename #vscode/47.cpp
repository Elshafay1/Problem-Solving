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
    int maxn, maxf = 0;

    for (int i = 0; i < n; i++)
    { // get instant freq of num "arr[i]"
        int tempn = arr[i], tempf = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                tempf++;
            }
        }
        // compare between last MostFreqNum and instant freq to get instant MostFreqNum
        if (maxf < tempf)
        {
            maxn = tempn;
            maxf = tempf;
        }
    }

    cout << "max " << maxn;
}
