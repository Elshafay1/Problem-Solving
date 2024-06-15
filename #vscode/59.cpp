#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // inserting
    int frq[501] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;

        frq[arr[i]]++;
    }

    // check array 0==>allow , not used

    for (int i = 0; i < 501; i++)
    {
        if (frq[i])
        {
            
            while (frq[i])
            {--frq[i];
                cout << i << " ";
                
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<check[i]<<" ";
    // }
}
