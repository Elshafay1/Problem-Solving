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

    int min;
    bool first_time = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int val = arr[i] + arr[j] + j - i;

            if (first_time || min > val)
            {
                min = val;
                first_time = 0;
            }
        }
    }
    cout << min;

    // using intializing value
    //  int min = arr[0] + arr[0] + 0 - 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i+1; j <= n; j++)
    //     {
    //         int val = arr[i] + arr[j] + j - i;
    //         if (min > val)
    //         {
    //             min = val;
    //             // cout<<i<<" : "<<min<<endl;
    //         }
    //     }
    // }
    // cout<<min;
}
