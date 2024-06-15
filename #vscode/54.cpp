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

    int min1,
        min2,
        min3;
    bool first_time = 1;
    for (int i = 0; i < n; i++)
    {
        if (first_time)
        {
            min1 = arr[i], min2 = arr[i], min3 = arr[i];
            first_time = 0;
        }

        if (min1 > arr[i])
        {
            min3 = min2;
            min2 = min1;

            min1 = arr[i];
        }
        
        if (min1 == min2)
        {
            min2 = arr[i];
        }
        else if (min2 > arr[i] && min1 < arr[i])
        {
            min3 = min2;
            min2 = arr[i];
        }

        if (min1 == min3||min2 == min3)
        {
            min3 = arr[i];
        }
        else if (min3 > arr[i] && min2 < arr[i])
        {
            min3 = arr[i];
        }
        // cout << i << "pos = " << min1 << "," << min2 << "," << min3 << endl;
    }
    cout << min1 << "," << min2 << "," << min3 << ",";
}
