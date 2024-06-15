#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    int max = arr[0], maxbefore;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            maxbefore = max;
            max = arr[i];
        }
    }

    cout<<"max "<<max<<"\nsmax "<<maxbefore;
}
